#include "Labwork 6.h"

int main()
{
	double x, precision, y;
	
	labwork_6::input(x, precision);	// Input of x and precision

	// Calculation of y
	if (x > 1)	// The 1-st condition
	{
		y = labwork_6::Arctg(x, precision) / labwork_6::Arctg(x - 5, precision);
	}
	else if (x <= 1 && x >= 0)	// The second condition
	{
		y = labwork_6::Arctg(x, precision) + labwork_6::Arctg(2 * x, precision);
	}

	labwork_6::output(y);	// The output of y
}

