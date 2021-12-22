#include "Lab. work 8.h"

// TASK 25: знайти максимальне значення серед елементів матриці А (n x n), розміщених над її головною діагоналлю.
// Видалити стовпець матриці А, що містить знайдений елемент

int main()
{
	int n, index;
	double** A = nullptr;
	std::cout << "Please, enter a rank of matrix: ";	// The primary input
	std::cin >> n;
	
	arrays::create_d_arr(A, n);
	arrays::fill_d_arr(A, n);
	labwork_8::max_value_above_main_diagonal(A, index, n);	// Calculation of the maximum value
	arrays::delete_of_col(A, n, index);	// Deletion of the column
	arrays::delete_d_arr(A, n);	// Deletion of the double array
}
