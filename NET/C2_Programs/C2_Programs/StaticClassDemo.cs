using System;

namespace StaticClassProgram
{
    static class Calculator
    {

        public static void Add(int a, int b)
        {
            Console.WriteLine("Addition: " + (a + b));
        }

        public static void Multiply(int a, int b)
        {
            Console.WriteLine("Multiplication: " + (a * b));
        }
    }

    class StaticClassDemo
    {
        static void Main(string[] args)
        {
            Calculator.Add(10, 20);
            Calculator.Multiply(5, 4);

        }
    }
}