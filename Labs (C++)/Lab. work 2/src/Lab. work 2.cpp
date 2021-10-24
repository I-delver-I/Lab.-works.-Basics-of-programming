#include <iostream>
#include <math.h>
using namespace std;

// Задача: з’ясувати, скільки розв’язків (один, безліч, не має) має система рівнянь,
// задана коефіцієнтами a1, b1, a2, b2 і правими частинами c1, c2

int main()
{
	double a1, b1, c1, a2, b2, c2; // Declaration of coefficients and parts
	double quantity;	// Declaration of the quantity of available solutions

	cout << "Enter a1: ";
	cin >> a1;
	cout << "Enter a2: ";
	cin >> a2;
	cout << "Enter b1: ";
	cin >> b1;
	cout << "Enter b2: ";
	cin >> b2;
	cout << "Enter c1: ";
	cin >> c1;
	cout << "Enter c2: ";
	cin >> c2;

	if (a1 * b2 == a2 * b1)
	{
		if (a1 * c2 == a2 * c1)
		{
			if (b1 * c2 == b2 * c1)
			{
				quantity = std::numeric_limits<double>::infinity();
			}
		}
		else
		{
			quantity = 0;
		}
	}
	else
	{
		quantity = 1;
	}
	cout << "The quantity of solutions is " << quantity;
}