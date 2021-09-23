#include <iostream>
using namespace std;

// Завдання: дані гіпотенуза і катет прямого трикутника.Знайти другий катет цього трикутника.

int main()
{
	float Cathetus1, Cathetus2, Hypotenuse; // катети та гіпотенуза
	cout << "Please, enter a length of cathetus: ";
	cin >> Cathetus1; // введення довжини першого катета

	if (Cathetus1 <= 0)
	{
		cout << "A side of an triangle musn't be less or equal to 0" << endl;
		return 0;
	}

	cout << "Please, enter a length of hypotenuse: ";
	cin >> Hypotenuse; // введення довжини гіпотенузи
	if (Hypotenuse <= 0)
	{
		cout << "A side of an triangle musn't be less or equal to 0" << endl;
		return 0;
	}

	Cathetus2 = sqrt(pow(Hypotenuse, 2) - pow(Cathetus1, 2)); // розрахунок другого катета за теоремою Піфагора
	cout << "The second cathetus is equal to: " << Cathetus2; // виведення результату

	return 0;
}
