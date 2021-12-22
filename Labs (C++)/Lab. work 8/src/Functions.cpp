#include "Lab. work 8.h"

namespace labwork_8
{
	void max_value_above_main_diagonal(double** A, int& index, const int N)
	{
		int temp = 0;
		double maxValue = 0;
		for (int i = 0; i < N; i++)
		{
			for (int y = 0; y < N; y++)
			{
				index = y;
				if (y > i)
				{
					temp = index;
					maxValue = (maxValue > A[i][y]) ? maxValue : A[i][y];
				}
			}
		}
		std::cout << "The maximum value equlas to: " << maxValue << std::endl;
		index = temp;
	}
}