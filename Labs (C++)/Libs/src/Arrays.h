#pragma once

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>

namespace arrays
{
	void delete_of_col(double**& Arr, const int N1, const int INDEX);
	void copy_d_arr(double** new_Arr, double** side_Arr, const int SIZE1, const int SIZE2);
	void delete_d_arr(double**& dArr, const int SIZE);
	void output_d_arr(double** A, const int SIZE);
	void output_d_arr(double** A, const int SIZE1, const int SIZE2);
	void create_d_arr(double**& A, const int N);
	void create_d_arr(double**& A, const int N1, const int N2);
	void fill_d_arr(double**& A, const int N);
	void fill_d_arr(double**& A, const int N1, const int N2);
	int max_value_above_main_diagonal(double** matrix, const int SIZE);
}