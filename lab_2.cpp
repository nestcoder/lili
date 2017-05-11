//============================================================================
// Name        : lab2.cpp
// Author      : Li Gu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string feeling, feelingreason, moodreason, subject, aspect;
	cout << "Hello! I am Li Gu. How are you today? Are you feeling good, fair or bad? " << endl;
	cin >> feeling;
	if (feeling == "good")
	{
		cout << "I'm glad that you are feeling good!" << endl;
	}
	else
	{
		cout << "Why are you feeling so " <<  feeling <<" ? Because of bad weather or mood?\n";
		cin >> feelingreason;
		if (feelingreason == "weather")
		{
			cout << "I hope the weather will be better tomorrow." << endl;
		}
		else if (feelingreason == "mood")
		{
			cout << "Why is your mood not so sweet? For your job, study or life?" << endl;
			cin >> moodreason;
			if (moodreason == "study")
			{
				cout << "Among Mathematics, English and Biographies, which one is the hardest for you?" << endl;
				cin >> subject;
			    if (subject == "Mathematics" || subject == "Biography")
			    {
			    	cout << "Yes, " << subject <<" is difficult." << endl;
			    }
			    else if (subject == "English")
			    {
			    	cout << "Which aspect bores you for English study, Grammar, Vocabulary or Writing?" << endl;
			        cin >> aspect;
			    	if (aspect == "Grammar")
			    	{
			    		char hard ;
			    		cout << "Please answer the following questions with either Y for Yes or N for No." << endl;
			    		cout << "Tense in grammar is very hard, isn't it?" << endl;
			    		cin >> hard;
			    		if (hard == 'Y')
			    		{
			    			cout << "I agree with you, good luck." << endl;
			    		}
			    		else
			    		{
			    			cout  << "I'm glad you are good at it." << endl;
			    		}
			    	}
			    	else if (aspect == "Vocabulary")
					{
			    		cout << "Vocabulary is the basic of a language." << endl;
					}
			    	else
			    	{
			    		cout << "Exercises will help you in " << aspect << "." << endl;
			    	}
			    }
			}
			else
			{
				cout << "Sorry I can't help with your "<< moodreason << "." << endl;
			}
		}
		else
		{
			cout << "I am sorry to hear about that." << endl;
		}

	}
	return 0;
}
