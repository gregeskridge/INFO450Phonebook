// INFO450Phonebook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
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
	char answer = 'y';

	for (i = 0; i < MAXENTRY && (answer == 'y' || answer == 'Y'); i++)
	{
		AddEntry(phoneList);
		cout << "Would you like to enter another name?" << endl;
		cin >> answer;
		cin.clear();
		cin.ignore();
	}
	
	cout << "Here i = " << i << endl;
	DisplayEntry(phoneList, i);

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
		cout << "Give me a name.  Just don't give me a duplicate name: " << endl;
		gets_s(phoneBook[i][0]);
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
		printf("%s\t%s\n", phoneBook[i][0], phoneBook[i][1]);
	}
}
