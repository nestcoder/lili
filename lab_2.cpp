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
	string feeling, feelingreason, moodreason,subject, aspect;
	cout << "Hello! I am Li Gu. How are you today? Do you feel good, fair or bad? " << endl;
	cin >> feeling;
	if (feeling == "good")
	{
		cout << "I'm glad you are feeling good!\n";
	}
	else
	{
		cout << "Why do you feel so " <<  feeling <<" ? Because of bad weather or mood?\n";
		cin >> feelingreason ;
		if (feelingreason == "weather")
		{
			cout << "I hope " << feelingreason << " will be better tomorrow." << endl;
		}
		else if (feelingreason == "mood")
		{
			cout << "Why is your " << feelingreason <<" not so sweet? For your job, study or life?" << endl;
			cin >> moodreason ;
			if (moodreason == "study")
			{
				cout << "Among Mathematics, English and Biographies, which one is the hardest to " << moodreason << " ?" << endl;
				cin >> subject;
			    if (subject == ("Mathematics") || ("Biography"))
			    {
			    	cout << "Yes, " << subject <<" is difficult." << endl;
			    }
			    else
			    {
			    	cout << "Which aspect bores you in "<< subject << "? Grammar, Vocabulary or Writing?\n";
			        cin >> aspect;
			    	if (aspect == "Grammar")
			    	{
			    		char hard ;
			    		cout << "Please answer the following questions with either Y for Yes or N for No." << endl;
			    		cout << "Tense in " << aspect << " is very hard, isn't it?" << endl;
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
			    		cout << aspect << " is the basic of a language." << endl;
					}
			    	else
			    	{
			    		cout << "Exercises will help you in " << aspect << " ." << endl;
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
