//ej3 asig-vectores

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()
{
	float *VNotas;
	VNotas = new float[15];

	for (int i = 0; i < 15; i++)
	{
		cout << " Ingrese la Nota " << i + 1 << " : ";
		cin >> VNotas[i];

		if (VNotas[i] < 0 || VNotas[i] > 20)
		{
			VNotas[i] = 0;
		}

	}
	cout << endl;

	cout << " NOTAS EN SENTIDO INVERSO \n";
	cout << " ======================== \n";

	for (int i = 14; i >= 0; i--)
	{
		cout << " La Nota " << i + 1 << " es " << VNotas[i] << endl;

	}

	_getch();

}

