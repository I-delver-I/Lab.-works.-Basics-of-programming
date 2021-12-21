using System;

namespace Lib
{
    public static class Labwork9
    {
		public static void InputCheckBase(string str)
		{
			bool fit = true;
			int count1 = 0, count2 = 0;
			// Defining on the base of braces
			for (int i = 0; (i < str.Length) && fit; i++)
			{
				if (str[i] != '(' && str[i] != ')')
				{
					Console.WriteLine("The sentence doesn't consist of braces");
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
			// The pronunciation of the verdict on braces count and corresponding
			if (fit)
			{
				if (count1 != count2)
				{
					Console.WriteLine("The sentence hasn't needed quantity of braces! ");
				}
				else
				{
					Console.WriteLine("The sentence has needed quantity of braces! ");
				}
			}
		}
	}
}
