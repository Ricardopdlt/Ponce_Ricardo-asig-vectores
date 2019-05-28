//ej1 asig-vectores

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int main()
{
	int *VNum;
	VNum = new int[5];

	int aux;


	for (int i = 0; i < 15; i++)
	{
		cout << " Ingrese el n" << char(163) << "mero " << i + 1 << " : ";
		cin >> aux;

		if (aux % 2 == 0)

		{
			VNum[i] = aux;
		}

		else
		{
			VNum[i] = 0;
		}

	}
	cout << endl;

	cout << " N" << char(233) << "MEROS EN SENTIDO INVERSO \n";
	cout << " ========================== \n";

	for (int i = 14; i >= 0; i--)
	{
		cout << " El n" << char(163) << "mero " << i + 1 << " es " << VNum[i] << endl;

	}


	_getch();

}