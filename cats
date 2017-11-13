#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter the weight of the first cat." << endl;
	cin >> a;
	cout << "Enter the weight of the second cat." << endl;
	cin >> b;

	if (a > 5) {
		cout << "The first cat is very fat!";
	}
	else {
		cout << "All right with the first cat";
	}
	cout << endl;
	if (b > 5) {
		cout << "The second cat is very fat!";
	}
	else {
		cout << "All right with the second cat";
	}
	cout << endl;
	system("pause");
	return 0;
}
