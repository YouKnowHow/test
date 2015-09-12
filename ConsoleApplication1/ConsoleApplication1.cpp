// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char* bufor = new char[1000];

	//scanf("%s", &bufor);
	//printf("\nWpisany tekst %s", bufor);
	//cin.get();
	cin >> bufor;

	cout << "\nWpisany tekst " << bufor;

	delete(bufor);
	return 0;
}

