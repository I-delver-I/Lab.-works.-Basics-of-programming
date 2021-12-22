#include "Labwork 5.h"

namespace labwork_5
{
	void the_number(int& i, int num, int& count, bool& isPrime)
	{
		if (i && !(num % i)) // The left number
		{
			count++;
			if ((count == 2 && i == num) || (count == 1 && abs(num) == 1))    // The condition to check whether the number as a prime one
			{
				isPrime = true;
			}
		}

		if (num < 0)
		{
			i--;
		}
		else if (num > 0)
		{
			i++;
		}
	}
}