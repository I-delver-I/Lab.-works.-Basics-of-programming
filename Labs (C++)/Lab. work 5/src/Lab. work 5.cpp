#include "Labwork 5.h"

// Task 25:
// Given a number called "a". Find the nearest prime number to this one

int main()
{
    double a;
    int lNum, rNum, isResult = 0;
    std::cout << "Please, enter a number: ";    // Initialization of the number
    std::cin >> a;
    if (((double)a / (int)a) != 1 && a)    // Checking whether the number as an integer one
    {
        lNum = floor(a);
        rNum = ceil(a);
    }
    else
    {
        lNum = a - 1;
        rNum = a + 1;
    }

    bool isLPrime = false, isRPrime = false;
    int i = 0, y = 0, count = 0, count2 = 0;

    while (!isResult)
    {
        while (((i <= lNum && lNum > 0) || (i >= lNum && lNum < 0)) || ((y <= rNum && rNum > 0) || (y >= rNum && rNum < 0)))
        {
            labwork_5::the_number(i, lNum, count, isLPrime);    // The left number

            labwork_5::the_number(y, rNum, count2, isRPrime);   // The rigth number
        }

            i = 0;
            y = 0;
            count = 0;
            count2 = 0;

        if (!isLPrime && !isRPrime) // Both numbers aren't prime
        {
            lNum -= 1;
            rNum += 1;
        }
        else if ((isLPrime && !isRPrime) || (!isLPrime && isRPrime))  // One of numbers is prime
        {
            if (isLPrime)
            {
                isResult = lNum;
                std::cout << "The nearest prime number is: " << isResult << std::endl;
            }
            else if (isRPrime)
            {
                isResult = rNum;
                std::cout << "The nearest prime number is: " << isResult << std::endl;
            }
        }
        else if (isLPrime && isRPrime)  // Both numbers are prime
        {
            if (((double)a / (int)a) != 1 && a)
            {
                if (fabs((double)rNum - a) < fabs((double)lNum - a))
                {
                    isResult = rNum;
                    std::cout << "The prime number is: " << isResult << std::endl;
                }
                else
                {
                    isResult = lNum;
                    std::cout << "The prime number is: " << isResult << std::endl;
                }
            }
            else
            {
                isResult = lNum;
                std::cout << "There are two the nearest prime numbers: " << isResult;
                isResult = rNum;
                std::cout << " and " << isResult << std::endl;
            }
        }
        isRPrime = false;
        isLPrime = false;
    }

    system("pause");
}

