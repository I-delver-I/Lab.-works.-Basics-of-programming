#pragma once

#include <iostream>
#include <ctime>
#include <math.h>

namespace labwork_7
{
	void input(int &n, int &k);
	double* create_an_array(int n);
	void print_array(const double* ARR, const int SIZE);
	double* creating_of_derivative_array(const double* M, const int N, const int QUANTITY, const int K);
	void count_of_elements_and_arithmetic_mean(const double* M, const int n, const int k, int& quantity, double& arithmetic_mean, double*& derivative_M);
	void replacing_of_elements(const int QUANTITY, const int N, const double* derivative_M, const double arithmetic_mean, double* M);
}