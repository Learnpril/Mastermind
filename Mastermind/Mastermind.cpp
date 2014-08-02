// Mastermind.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>;
using namespace std;


int GetRandomNumberLessThan(int max)
{
	return rand() % max;
}


string GiveMeSomeLetterFromANumber(int number)
{
	if ( number == 0 )
	{
		return "A";
	}
	else if ( number == 1 )
	{
		return "B";
	}
	else if ( number == 2 )
	{
		return "C";
	}
	else if ( number == 3 )
	{
		return "D";
	}
	
	return "F";
}



int main()
{


	int first  = GetRandomNumberLessThan(4);
	int second = GetRandomNumberLessThan(4);
	int third  = GetRandomNumberLessThan(4);
	int fourth = GetRandomNumberLessThan(4);

	string One   = GiveMeSomeLetterFromANumber( first  );
	string Two   = GiveMeSomeLetterFromANumber( second );
	string Three = GiveMeSomeLetterFromANumber( third  );
	string Four  = GiveMeSomeLetterFromANumber( fourth );
	
	cout << One.c_str();
	cout << Two.c_str();
	cout << Three.c_str();
	cout << Four.c_str();

	

//	t someNumber = GetRandomNumberLessThan(2);
//	cout << someNumber <<"\n";
	
	


	cout << "\n\n		    _____         _                 _       _ "<< endl;
	cout << "		   |     |___ ___| |_ ___ ___ _____|_|___ _| |"<< endl;
	cout << "		   | | | | .'|_ -|  _| -_|  _|     | |   | . |"<< endl;
	cout << "		   |_|_|_|__,|___|_| |___|_| |_|_|_|_|_|_|___|"<< endl;
	cout << "\n\n\n\n\n\n" << endl;

	int i = 0;
	while( i < 10)
	{
		cout << "\n		     | " << " _ " << " | " << " _ " << " | " << " _ " << " | " << " _ " << " | " << "	        -  -" << endl;
		cout << "		     | " << "   " << " | " << "   " << " | " << "   " << " | " << "   " << " | " <<  "	        -  -\n" << endl;
		i++;
	}

	string userGuess = "";
//	cout << "\nGuess the 4-digit code: ";
//	cin >> userGuess;
//	cout << "\nTry Again! ";

	do
	{
	cout << "Guess the 4-digit code (A, B, C, D): " <<endl;
	cin >> userGuess;
	}while(userGuess.size() ==4);
	cout << "\Wrong amount of letters. \n\n";
	do
	{
	cout << "Guess the 4-digit code (A, B, C, D): \n" <<endl;
	cin >> userGuess;
	}while(userGuess.size() ==4);
	return 0;
}


