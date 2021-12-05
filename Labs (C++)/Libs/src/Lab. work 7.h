#pragma once

#include <iostream>
#include <ctime>
#include <math.h>
#include <stdlib.h>

namespace labwork_7
{
	void input(int &n, int &k);
	void create_an_array(double *&M, const int n);
	void print_array(const double* ARR, const int SIZE);
	void count_of_elements_and_arithmetic_mean(const double* M, const int N, const int K, double& arithmetic_mean);
	void replacing_of_elements(const int N, const int K, const double ARITHMETIC_MEAN, double* M);
}