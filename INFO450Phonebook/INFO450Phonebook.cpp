// INFO450Phonebook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

const int MAXENTRY = 10;
const int MAXPARTS = 2;
const int MAXLENGTH = 50;

void AddEntry(char phoneBook[][][MAXLENGTH]);
void DisplayEntry(char phoneBook[][][MAXLENGTH]);


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

void AddEntry(char phoneBook[][][MAXLENGTH])
{

}

void DisplayEntry(char phoneBook[][][MAXLENGTH])
{

}
