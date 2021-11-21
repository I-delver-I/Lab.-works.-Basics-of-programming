#include "Lab. work 7.h"

// TASK 25: задані масив дійсних чисел M(n) і натуральне k. Визначити кількість елементів масиву M, більших за k, 
// і їх середнє арифметичне. Замінити відповідні елементи масиву знайденим значенням

int main()
{
    int n, k, quantity = 0;
    labwork_7::input(n, k); // The primary input
    double* M = labwork_7::create_an_array(n), arithmetic_mean, *derivative_M = NULL;  // The creation of array
    // Summary of quantity of elements and calculation of the sum
    labwork_7::count_of_elements_and_arithmetic_mean(M, n, k, quantity, arithmetic_mean, derivative_M);
    // Changing of needed elements of the primary array assigning them the value of the arithmetic mean of the derivative array
    labwork_7::replacing_of_elements(quantity, n, derivative_M, arithmetic_mean, M);
}