#include "Labwork 6.h"
#include "Labwork 5.h"

namespace labwork_5
{
	void the_number(int& i, int& num, int& count, bool& isPrime)
	{
		if (i && !(num % i)) // The left number
		{
			count++;
			if ((count == 2 && i == num) || (count == 1 && abs(num) == 1))    // The condition to check whether the number as a prime one
			{
				isPrime = true;
			}
		}

		if (num < 0)
		{
			i--;
		}
		else if (num > 0)
		{
			i++;
		}
	}
}

namespace labwork_6
{
	void input(double &x, double &precision)	// Input of x and precision
	{
		std::cout << "Please, enter a number: ";
		std::cin >> x;
		while (x < 0)	// Checking for forbidden values
		{
			std::cout << "Enter x which isn't less than zero: ";
			std::cin >> x;
		}
		std::cout << "Please, enter the precision: ";
		std::cin >> precision;
	}
	
	double Arctg(const double x, const double precision)	// Calculation of arctg
	{
		double numerator = x;
		double arctg = numerator;
		double xn = numerator;

		for (int i = 1; precision < xn; i++)
		{
			numerator *= -pow(x, 2);
			xn = numerator / (2 * static_cast<double>(i) + 1);
			arctg += xn;
		}
		return arctg;
	}

	void output(const double& y)	// The output of y
	{
		std::cout << "The y is equal to " << y << std::endl;
	}
}

