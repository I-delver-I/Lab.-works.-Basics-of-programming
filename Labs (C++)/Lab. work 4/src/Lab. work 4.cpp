#include <iostream>
#include <math.h>

// TASK 25

int main()
{
	long long n;
	std::cout << "Enter a number which is equal to 4 or is bigger than the last one: ";
	std::cin >> n;	// Initialization of n
	while (n < 4)	// Checking of n for performing of the condition
	{
		std::cout << "Something went wrong. Enter the number again: ";
		std::cin >> n;
	}

	double v3 = 0, v2 = 0, v1 = 1.5, v; // Initialization of three primary elements of the sequence
	double &vn = v;

	for (long long i = 4; i <= n; i++)	// Calculating of vn
	{
		v = (i + 1) / (pow(static_cast<double>(i), 2) + 1.) * v1 - v2 * v3;
		v3 = v2;
		v2 = v1;
		v1 = v;
	}
	
	if (vn != 0)	// Checking for belonging to the range of data type
	{
		std::cout << "vn is equal to " << vn;
	}
	else
	{
		std::cout << "Too big value";
	}
}