#include "Lab. work 9.h"

namespace labwork_9
{
	// Verifying the entered sentence consists of braces for conditions of its equal quantity
	void input_check_sentence(const char* str)
	{
		bool fit = true;
		int count1{}, count2{};
		for (int i = 0; (i < strlen(str) + 1) && fit == true; i++)
		{
			if ((str[i] != '(' && str[i] != ')') && str[i] != '\0')
			{
				std::cout << "The sentence doesn't consist of braces";
				fit = false;
			}
			else if (str[i] == '(')
			{
				count1++;
			}
			else if (str[i] == ')')
			{
				count2++;
			}
		}

		if (fit)
		{
			if (count1 != count2)
			{
				std::cout << "The sentence hasn't needed quantity of braces! " << std::endl;
			}
			else
			{
				std::cout << "The sentence has needed quantity of braces! " << std::endl;
			}
		}
	}
}