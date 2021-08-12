// passwordGen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <ctime>
#include <Windows.h>
#include <conio.h>
using namespace std;

const int MAX = 26;
const int NUM = 10;
const int CHATR = 28;


// Function ==============================================================================================================
string  printRandomStringA(int n)
{
	char upperCase[]{ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	string res = "";
	for (int i = 0; i < n; i++)
	{
		res = res + upperCase[rand() % MAX];
		return res;
	}
}
string  printRandomStringa(int m)
{
	char lowerCase[]{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	string res = "";
	for (int i = 0; i < m; i++)
	{
		res = res + lowerCase[rand() % MAX];
		return res;
	}
}
int printRadomNum(int o)
{
	int numArry[]{ 1,2,3,4,5,6,7,8,9,0 };
	int number = 0;
	for (int i = 0; i < o; i++)
	{
		number = number + numArry[rand() % NUM];
		return number;
	}
}
string  printRandomChar(int p)
{
	char symbols[]{ '!','@','#','$','%','^','&','*','(',')','-','=','_','+','{','}','[',']',';',':','"',':','<',',','>','.','/','?' };

	string res = "";
	for (int i = 0; i < p; i++)
	{
		res = res + symbols[rand() % CHATR];
		return res;
	}
}

// Function (for numbers)===================================================================================================
int randNum()
{
	int f;
	return f = rand() % 4 + 1;
}

int main()
{
	srand(time(NULL));
	int n = 10;
	int m = 10;
	int o = 10; 
	int p = 10;


	//Main loop for pass word gen. 
	int i = 1;
	cout << "This is your new password" << endl;
	cout << " " << endl;
		for (int i = 1; i < 17; i++)
		{
			int x;

			randNum();

			x = randNum();
			if (x == 1)
			{
				cout << printRandomStringA(n);
			}
			else if (x == 2)
			{
				cout << printRandomStringa(m);
			}
			else if (x == 3)
			{
				cout << printRadomNum(o);
			}
			else if (x == 4)
			{
				cout << printRandomChar(p);
			}
		}
		cout << " " << endl;
		return 0;
}

