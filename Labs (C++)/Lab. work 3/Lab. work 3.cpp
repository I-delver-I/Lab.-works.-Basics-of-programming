#include <iostream>
#include <math.h>
using namespace std;

// Варіант № 25

int main()
{
    double x = 0, a = 0, Sum = 0, eps = (double)pow(10, -4);   // Declaration of x, a, Sum, eps and initialization of them

    cout << "Enter x strictly more than -2 and strictly less than 2: ";
    cin >> x;

    int n = 1;  // Declaration and initialization of n

    while (x <= -2 || x >= 2) // Checking for mistakes of initialization of x
    {
        cout << "Entered value is wrong. Try again: ";
        cin >> x;
    }

    while (n <= 10) // Overcoming of the first condition
    {
        a = (pow(x, 2 * n) * sin(pow(x, n))) / pow(n, 2);
        Sum += a;

        n++;
    }

    while (n > 10 && abs(a) >= eps) // The beginning of searching a that is less than eps (the second condition)
    {
        a = (pow(x, (2 * n)) * sin(pow(x, n))) / pow(n, 2); // Total calculation of Sum
        Sum += a;
        
        n++;
    }
    cout << "The sum of " << n << " elements: " << Sum << endl; // Result
}


