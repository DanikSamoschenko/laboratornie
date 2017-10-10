// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double x;
	double y;

	cout << "Enter x: ";
	cin >> x;

	cout << "Enter y: ";
	cin >> y;

	cout << endl;
	
	cout << "Summa = " << x + y << endl;
	cout << "Raznost = " << x - y << endl;
	cout << "Proizvedenie = " << x * y << endl;
	cout << "Delenie = " << x / y << endl;
	_getch();
	return 0;

}
