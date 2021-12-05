#include "Lab. work 9.h"
#include "Lab. work 8.h"
#include "Lab. work 7.h"
#include "Labwork 6.h"
#include "Labwork 5.h"
#include "Arrays.h"

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
	void print_array(const double *ARR, const int SIZE)
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
	void replacing_of_elements(const int N, const int K, const double ARITHMETIC_MEAN, double *M)
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

namespace labwork_8
{
	void max_value_above_main_diagonal(double **A, int &index, const int N)
	{
		int temp = 0;
		double maxValue = 0;
		for (int i = 0; i < N; i++)
		{
			for (int y = 0; y < N; y++)
			{
				index = y;
				if (y > i)
				{
					temp = index;
					maxValue = (maxValue > A[i][y]) ? maxValue : A[i][y];
				}
			}
		}
		std::cout << "The maximum value equlas to: " << maxValue << std::endl;
		index = temp;
	}
}

namespace labwork_9
{
	// Verifying the entered sentence consists of braces for conditions of its equal quantity
	void input_sentence(std::string & sentence)
	{
		bool all_correct = false;
		
		while (all_correct = false) // 
		{
			for (int i = 0; i < sentence.size(); i++)
			{
				if (sentence[i] != '(' || sentence[i] != ')')
				{
					std::cout << "Please, enter a sentence only consists of braces: ";
					sentence.clear();
					std::cin >> sentence;
				}
				else if (i == sentence.size() - 1)
				{
					all_correct = true;
				}
			}
		}
	}

	void brace_balance(const std::string sentence)
	{
		int count1 = 0, count2 = 0;
		for (int i = 0; i < sentence.size(); i++)
		{
			if (sentence[i] == '(')
			{
				count1++;
			}
			else if (sentence[i] == ')')
			{
				count2++;
			}
		}

		if (count1 != count2)
		{
			std::cout << "The sentence hasn't needed quantity of braces! " << std::endl;
		}
		else
		{
			std::cout << "The sentence has needed quantity of braces! " << std::endl;
		}
	}
}