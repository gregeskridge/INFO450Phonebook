// INFO450Phonebook.cpp : This allows you to create a phonebook, check for duplicate entries, and display said phonebook.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

const int MAXENTRY = 10;
const int MAXPARTS = 2;
const int MAXLENGTH = 50;

void AddEntry(char phoneBook[][MAXPARTS][MAXLENGTH]);
void DisplayEntry(char phoneBook[][MAXPARTS][MAXLENGTH], int iValue);

int main()
{
	char phoneList[MAXENTRY][MAXPARTS][MAXLENGTH];
	int i;
	char answer = 'a';

	for (i = 0; i < MAXENTRY && (answer == 'A' || answer == 'a' || answer == 'D' || answer == 'd'); i++)
	{
		cout << "--------------------------" << endl;
		cout << "What would you like to do?" << endl;
		cout << "--------------------------" << endl;
		cout << "\t[A]dd a new entry -- enter A" << endl;
		cout << "\t[D]isplay all entries -- enter D" << endl;
		cout << "\t[Q]uit this application -- enter Q" << endl;
		cin >> answer;
		if (answer != 'A'	&& answer != 'a' && answer != 'D' && answer != 'd' && answer != 'Q' && answer != 'q')
		{
			cin.clear();
			cin.ignore();
			cout << "Your entry is invalid.  Please enter a valid character." << endl;
			cin >> answer;
			i--;
		}
		else if(answer == 'A' || answer == 'a')
		{
			cin.clear();
			cin.ignore();
			AddEntry(phoneList);
		}
		else if (answer == 'D' || answer == 'd')
		{
			cin.clear();
			cin.ignore();
			DisplayEntry(phoneList, i);
		}
		else
		{
			cin.clear();
			cin.ignore();
		}		
	}
	
    return 0;
}

void AddEntry(char phoneBook[][MAXPARTS][MAXLENGTH])
{
	static int i = 0;
	if (i >= MAXENTRY)
	{
		cout << "Hold on there, big guy!  Your list is totally full." << endl;
	}
	else
	{
		int a;
		
		cout << "Entry Number " << i + 1 << ":" << endl;
		cout << "Give me a name.  Just don't give me a duplicate name: " << endl;
		gets_s(phoneBook[i][0]);

		for (a = 0; a < i; a++)
		{ 
			if (strcmp(phoneBook[i][0], phoneBook[a][0]) == 0)
			{
				cout << "You committed a nono.  Please enter a new name." << endl;
				gets_s(phoneBook[i][0]);
			}
			else
			{

			}
		}
		cout << "Give me the phone number for that person: " << endl;
		gets_s(phoneBook[i][1]);
		i++;
	}
}

void DisplayEntry(char phoneBook[][MAXPARTS][MAXLENGTH], int iValue)
{
	int i;
	for (i = 0; i < iValue; i++)
	{
		printf("Entry Number %i:\t%s\t%s\n", i+1, phoneBook[i][0], phoneBook[i][1]);
	}
}
