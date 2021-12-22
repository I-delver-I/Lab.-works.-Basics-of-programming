#include "Arrays.h"

namespace arrays
{
	void copy_d_arr(double** new_Arr, double** side_Arr, const int SIZE1, const int SIZE2)
	{
		for (int a = 0; a < SIZE1; a++)
		{
			for (int g = 0; g < SIZE2; g++)
			{
				new_Arr[a][g] = side_Arr[a][g];
			}
		}
	}

	void delete_d_arr(double**& dArr, const int SIZE)
	{
		for (int j = 0; j < SIZE; j++)
		{
			delete[] dArr[j];
		}
		delete[] dArr;
	}

	void output_d_arr(double** A, const int SIZE)
	{
		std::cout << "Here is a matrix: " << std::endl;
		for (int z = 0; z < SIZE; z++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				std::cout << std::setw(15) << A[z][j];
			}
			std::cout << std::endl;
		}
	}

	void output_d_arr(double** A, const int SIZE1, const int SIZE2)
	{
		std::cout << "Here is a double array: " << std::endl;
		for (int z = 0; z < SIZE1; z++)
		{
			for (int j = 0; j < SIZE2; j++)
			{
				std::cout << std::setw(15) << A[z][j];
			}
			std::cout << std::endl;
		}
	}

	void create_d_arr(double**& A, const int N)
	{
		A = new double* [N];
		for (int i = 0; i < N; i++)
		{
			A[i] = new double[N];
		}
	}

	void create_d_arr(double**& A, const int N1, const int N2)
	{
		A = new double* [N1];
		for (int i = 0; i < N1; i++)
		{
			A[i] = new double[N2];
		}
	}

	void fill_d_arr(double**& A, const int N)
	{
		for (int i = 0; i < N; i++)
		{
			for (int y = 0; y < N; y++)
			{
				A[i][y] = (rand() % 3 == 2) ? INT_MAX / (rand() % (INT_MAX - 1) + 1) : (rand() % 3 == 1) ? ((rand() % (INT_MAX - 1) + 1) / INT_MAX) : 0;
			}
		}
		// Output of matrix
		std::cout << "The matrix was created is: " << std::endl;
		arrays::output_d_arr(A, N);
	}

	void fill_d_arr(double**& A, const int N1, const int N2)
	{
		for (int i = 0; i < N1; i++)
		{
			for (int y = 0; y < N2; y++)
			{
				A[i][y] = (rand() % 3 == 2) ? INT_MAX / (rand() % (INT_MAX - 1) + 1) : (rand() % 3 == 1) ? ((rand() % (INT_MAX - 1) + 1) / INT_MAX) : 0;
			}
		}
		// Output of the array
		std::cout << "The double array was created is: " << std::endl;
		output_d_arr(A, N1, N2);
	}

	int max_value_above_main_diagonal(double** matrix, const int SIZE)
	{
		double maxValue = 0;
		for (int i = 0; i < SIZE; i++)
		{
			for (int y = 0; y < SIZE; y++)
			{
				if (y > i)
				{
					maxValue = (maxValue > matrix[i][y]) ? maxValue : matrix[i][y];
				}
			}
		}
		std::cout << "The maximum value above of the main diagonal equlas to: " << maxValue << std::endl;
		return maxValue;
	}

	void delete_of_col(double**& Arr, const int N1, const int INDEX)
	{
		// Creating of the new matrix
		const int N2 = N1 - 1;
		double** arr;
		arrays::create_d_arr(arr, N1, N2);

		// Initialization of the new matrix
		for (int a = 0; a < N1; a++)
		{
			for (int g = 0; g < N2; g++)
			{
				if (g != INDEX)
					arr[a][g] = Arr[a][g];
			}
		}

		// Deletion of the old matrix
		arrays::delete_d_arr(Arr, N1);

		// Creation of a new one
		arrays::create_d_arr(Arr, N1, N2);

		// Copiyng of temp array to the needed one
		arrays::copy_d_arr(Arr, arr, N1, N2);

		// Printing of the matrix has been created
		std::cout << "The reconstructed matrix is: " << std::endl;
		arrays::output_d_arr(Arr, N1, N2);
		arrays::delete_d_arr(arr, N2);
	}
}