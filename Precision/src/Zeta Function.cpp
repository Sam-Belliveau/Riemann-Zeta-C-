#include "stdafx.h"

using namespace std;

double zeta(double num) {
	long double out = 0;
	long double i = 1;
	long double calculation = 1;
	while (calculation > 1e-20) {
		calculation = (1 / pow(i, num));
		out += calculation;
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
	cout << "#  Higher Inputs Calculate Faster  #" << endl;
	cout << "#        Maximum Precision         #" << endl;
	cout << "####################################\n" << endl;
	while (1) {
		cout << "Enter Number: ";
		cin >> num;
		cout << "\n";
		if (cin.fail()) {
			cout << "\nInput Has Resulted In An Error.\n\n---------ERROR INFORMATION---------\n This Error Be Caused By:\n\n 1. Number Entered Is Too Large\n 2. A Letter Or Symbol Was Entered\n-----------------------------------\n\n";
			cin.clear(); cin.ignore(INT64_MAX, '\n');
		}
		else {
			if (num > 1) {
				cout << std::setprecision(14)  << zeta(num) << endl;
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

