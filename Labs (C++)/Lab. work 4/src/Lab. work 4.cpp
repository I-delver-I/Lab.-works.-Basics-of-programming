#include <iostream>
#include <math.h>
using namespace std;

// TASK 25

int main()
{
	unsigned long long n;
	cout << "Enter a number which is equal to 4 or is bigger than the last one: ";
	cin >> n;	// Initialization of n
	while (n < 4)	// Checking of n for performing of the condition
	{
		cout << "Something went wrong. Enter the number again: ";
		cin >> n;
	}

	double v3 = 0, v2 = 0, v1 = 1.5, v; // Initialization of three primary elements of the sequence
	double &vn = v;

	for (unsigned long long i = 4; i <= n; i++)	// Calculating of vn
	{
		v = static_cast<double>(i + 1.) / static_cast<double>(pow(static_cast<double>(i), 2) + 1.) * v1 - v2 * v3;
		v3 = v2;
		v2 = v1;
		v1 = v;
	}
	
	if (vn != 0)	// Checking for belonging to the range of data type
	{
		cout << "vn is equal to " << vn;
	}
	else
	{
		cout << "Too big value";
	}
}