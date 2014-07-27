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

void DrawALineForMe()
{
	cout << "______________________________________\n";
}

int GiveMeMyNumberPlusAThousand(int number)
{
	return number + 1000;
}

bool GiveMeAFalse()
{
	return false;
}

bool GiveMeATrue()
{
	return true;
}

bool GiveMeMyBool(bool myBool)
{
	return myBool;
}

bool GiveMeNotMyBool(bool myBool)
{
	return !myBool;
}

string GiveMeMyString(string words)
{
	return words;
}

string GiveMeYesOrNo(bool myBool)
{
	if( myBool )
	{
		return "yes";
	}
	else
	{
		return "no";
	}
}

string MoreThanAHundred(int number)
{
	if( number < 100)
	{
		return "less than a hundred";
	}
	else
	{
		return "more than a hundred";
	}
}

int main()
{
	cout << GiveMeYesOrNo( true );
	int a;
	cin >> a;
	cout << MoreThanAHundred( a );
	cout << MoreThanAHundred( 199 );

	int lines = 10;
	while( lines > 0 )
	{
		DrawALineForMe();
		lines--;
	}

	int redundant = GiveMeMyNumberPlusAThousand( 9 );
	cout << redundant;

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

	string someshit;
	cout << "give me some shit";
	cin >> someshit;

	int someNumber = GetRandomNumberLessThan(2);
	cout << someNumber <<"\n";
	


	cout << "\n\n		    _____         _                 _       _ "<< endl;
	cout << "		   |     |___ ___| |_ ___ ___ _____|_|___ _| |"<< endl;
	cout << "		   | | | | .'|_ -|  _| -_|  _|     | |   | . |"<< endl;
	cout << "		   |_|_|_|__,|___|_| |___|_| |_|_|_|_|_|_|___|"<< endl;
	cout << "\n\n\n\n\n\n   		     | " << " _ " << " | " << " _ " << " | " << " _ " << " | " << " _ " << " | " << "	        -  -" << endl;
	cout << "		     | " << "   " << " | " << "   " << " | " << "   " << " | " << "   " << " | " <<  "	        -  -\n" << endl;
	
	int i = 0;
	while( i < 10)
	{
		cout << "\n		     | " << " _ " << " | " << " _ " << " | " << " _ " << " | " << " _ " << " | " << "	        -  -" << endl;
		cout << "		     | " << "   " << " | " << "   " << " | " << "   " << " | " << "   " << " | " <<  "	        -  -\n" << endl;
		i++;
	}

	return 0;
}


