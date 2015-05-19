#include <iostream>
#include "Utilities.h"

using namespace std;

//promts the user to give a positive double from the command line
double Utilities::getPositiveDouble()
{
	cout << " :";
	double input = 0;
	cin >> input;
	while (input <= 0)
	{
		cout << "Error: please enter a number greater than 0." << endl;
		cout << " :";
		cin >> input;
	}
	
	return input;
}
