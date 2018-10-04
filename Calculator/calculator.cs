using System;

namespace Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("\nenter the first number: ");
            double a = double.Parse(Console.ReadLine());
            Console.Write("\nenter the second number: ");
            double b = double.Parse(Console.ReadLine());

            Console.Write("Select the operation to be perform\n(1) +\n(2) -\n(3) *\n(4) / \n");
            int op = int.Parse(Console.ReadLine());

            switch (op)
            {
                case 1:
                    Console.WriteLine("result: " + (a + b));
                    break;
                case 2:
                    Console.WriteLine("result: " + (a - b));
                    break;
                case 3:
                    Console.WriteLine("result: " + (a * b));
                    break;
                case 4:
                    Console.WriteLine("result: " + (a / b));
                    break;
                default:
                    Console.WriteLine("wrong operation");
                    break;
            }

            Console.ReadLine();
        }
    }
}
