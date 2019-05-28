//ej2 asig-vectores

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	char *VVocal;
	VVocal = new char[5];


	for (int i = 0; i < 5; i++)
	{
		cout << " Ingrese la Vocal " << i + 1 << " : "; //sin restricción pues se asume que solo ingresará vocales
		cin >> VVocal[i];
	}
	cout << endl;

	cout << " VOCALES EN SENTIDO INVERSO \n";
	cout << " ========================== \n";

	for (int i = 4; i >= 0; i--)
	{
		cout << " La Vocal " << i + 1 << " es " << VVocal[i] << endl;

	}

	_getch();



}