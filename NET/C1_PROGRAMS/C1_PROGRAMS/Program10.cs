using System;

class Program10
{
    static void Main()
    {
        Console.WriteLine("Enter a number:");
        int n = int.Parse(Console.ReadLine());

        if (n > 0)
            Console.WriteLine("Positive");
        else if (n < 0)
            Console.WriteLine("Negative");
        else
            Console.WriteLine("Zero");
    }
}