using System;
using Lib;

namespace Lab._work_9
{
    static class Program
    {
        static void Main()
        {   
            // Basic input
            Console.Write("Please, enter a sentence consists of braces: ");
			string str = Console.ReadLine();
            // Checking for the needed base of the sentence
            Labwork9.InputCheckBase(str);
        }
    }
}

