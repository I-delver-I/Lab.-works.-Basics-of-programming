#include "Lab. work 7.h"

namespace labwork_7
{
	// Basic input
	void input(int& n, int& k)
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
	void create_an_array(double*& M, const int N)
	{
		srand(time(NULL));
		M = new double[N];
		for (int i = 0; i < N; i++)
		{
			M[i] = INT_MAX / (rand() % (INT_MAX - 1) + 1);
		}
		// Showing of the created array
		std::cout << "Showing of the created array: " << std::endl;
		print_array(M, N);
	}

	// Output of an array
	void print_array(const double* ARR, const int SIZE)
	{
		std::cout << "Here is an array: ";
		for (int h = 0; h < SIZE; h++)
		{
			std::cout << ARR[h] << " ";
		}
		std::cout << std::endl;
	}

	// The count of elements which are bigger than k and their arithmetic mean
	void count_of_elements_and_arithmetic_mean(const double* M, const int N, const int K, double& arithmetic_mean)
	{
		int quantity = 0;
		// Searching of arithmetic mean and quantity
		double sum = 0;
		for (int y = 0; y < N; y++)
		{
			if (M[y] > K)
			{
				sum += M[y];
				quantity++;
			}
		}
		if (sum != 0 && quantity != 0)
		{
			arithmetic_mean = sum / quantity;

			std::cout << "Arithmetic mean equals to: " << arithmetic_mean << std::endl;
		}
		std::cout << "The quantity of elements which are bigger than k is: " << quantity << std::endl;
	}

	// Replacing of elements
	void replacing_of_elements(const int N, const int K, const double ARITHMETIC_MEAN, double* M)
	{
		for (int u = 0; u < N; u++)
		{
			if (M[u] > K)
			{
				M[u] = ARITHMETIC_MEAN;
			}
		}
		// Printing of the replaced M
		std::cout << "Replaced M: " << std::endl;
		print_array(M, N);
	}
}