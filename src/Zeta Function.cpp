#include "stdafx.h"

using namespace std;

double zeta(double num) {
	double out = 0;
	const double iterations = 100000000;
	double i = 1;
	while (i <= iterations) {
		out += (1/pow(i, num));
		i++;
	}
	return out;
}

int main()
{
	double num;
	cout << "####################################" << endl;
	cout << "# Riemann Zeta Function Calculator #" << endl;
	cout << "#    Programed By: Sam Belliveau   #" << endl;
	cout << "#       Eight Digits Of Detail     #" << endl;
	cout << "#       100,000,000 Iterations     #" << endl;
	cout << "####################################\n\n" << endl;
	while (1) {
		cout << "Enter Number: ";
		cin >> num;
		cout << "\n";
		if (cin.fail()) {
			cout << "\nInput Has Resulted In An Error.\n\n---------ERROR INFORMATION---------\n This Error Be Caused By:\n\n 1. Number Entered Is Too Large\n 2. A Letter Or Symbol Was Entered\n-----------------------------------\n\nPlease Enter In Another Number\n\n\n";
			cin.clear(); cin.ignore(INT64_MAX, '\n');
		}
		else {
			if (num > 1) {
				cout << std::setprecision(8)  << zeta(num) << endl;
			}
			else {
				cout << "Escapes To Infinity" << endl;
			}
			cout << "\n\n";
			cin.clear(); cin.ignore(INT64_MAX, '\n');
		}
	}
    return 0;
}

