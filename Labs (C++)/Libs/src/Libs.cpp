#include "Lab. work 7.h"
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

namespace labwork_7
{
	// Basic input
	void input(int &n, int &k)
	{
		std::cout << "Please, enter the size of array: ";
		std::cin >> n;
		while (n <= 0)	// Checking for the natural n
		{
			std::cout << "Please, enter a natural n: ";
			std::cin >> n;
		}
		std::cout << "Please, enter the k: ";
		std::cin >> k;
		while (k <= 0)	// Checking for the natural k
		{
			std::cout << "Please, enter a natural k: ";
			std::cin >> k;
		}
	}

	// Creating of an array
	double* create_an_array(int n)
	{
		srand(time(NULL));
		double *M = new double[n];
		for (int i = 0; i < n; i++)
		{
			M[i] = INT_MAX / rand() % (INT_MAX - 1) + 1;
		}

		// Showing of the created array
		std::cout << "Showing of the created array: " << std::endl;
		print_array(M, n);
		return M;
	}

	// Output of an array
	void print_array(const double *ARR, const int SIZE)
	{
		std::cout << "Here is an array: ";
		for (int h = 0; h < SIZE; h++)
		{
			std::cout << ARR[h] << " ";
		}
		std::cout << std::endl;
	}

	// Creating of the derivative array
	double* creating_of_derivative_array(const double *M, const int N, const int QUANTITY, const int K)
	{
		double *derivative_M = new double[QUANTITY];
		int temp = 0;
		for (int i = 0; i < N; i++)
		{
			if (M[i] > K)
			{
				derivative_M[temp] = M[i];
				temp++;
			}
		}
		std::cout << "The derivative array: " << std::endl;
		print_array(derivative_M, QUANTITY);

		return derivative_M;
	}

	// The count of elements which are bigger than k and their arithmetic mean
	void count_of_elements_and_arithmetic_mean(const double *M, const int n, const int k, int &quantity, double &arithmetic_mean, double *&derivative_M)
	{
		// The quantity of elements
		for (int o = 0; o < n; o++)
		{
			if (M[o] > k)
			{
				quantity++;
			}
		}
		std::cout << "The quantity of elements which are more than k is: " << quantity << std::endl;
		
		// Creating of the derivative array
		derivative_M = creating_of_derivative_array(M, n, quantity, k);
		  
		// Searching of arithmetic mean
		double sum = 0;
		for (int y = 0; y < quantity; y++)
		{
			sum += derivative_M[y];
		}
		arithmetic_mean = sum / quantity;
		std::cout << "Arithmetic mean equals to: " << arithmetic_mean << std::endl;
	}

	// Replacing of elements
	void replacing_of_elements(const int QUANTITY, const int N, const double *derivative_M, const double arithmetic_mean, double *M)
	{
		for (int u = 0; u < QUANTITY; u++)
		{
			for (int r = 0; r < N; r++)
			{
				if (M[r] == derivative_M[u])
				{
					M[r] = arithmetic_mean;
				}
			}
		}

		// Printing of the replaced M
		std::cout << "Replaced M: " << std::endl;
		print_array(M, N);
	}
}
