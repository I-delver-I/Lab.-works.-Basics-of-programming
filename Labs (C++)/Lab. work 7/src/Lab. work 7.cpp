#include "Lab. work 7.h"

// TASK 25: задані масив дійсних чисел M(n) і натуральне k. Визначити кількість елементів масиву M, більших за k, 
// і їх середнє арифметичне. Замінити відповідні елементи масиву знайденим значенням

int main()
{
    int n, k;
    double* M = nullptr;
    double arithmetic_mean = 0;
    labwork_7::input(n, k); // The primary input
    labwork_7::create_an_array(M, n);
    // Summary of quantity of the elements and calculation of the sum
    labwork_7::count_of_elements_and_arithmetic_mean(M, n, k, arithmetic_mean);
    // Changing of needed elements of the primary array assigning them the value of the arithmetic mean of the derivative array
    if (arithmetic_mean)
    {
        labwork_7::replacing_of_elements(n, k, arithmetic_mean, M);
    }
    delete[] M;
}