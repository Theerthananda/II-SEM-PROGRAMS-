using System;

class Program13
{
    static void Main()
    {
        Console.WriteLine("Enter a number:");
        int n = int.Parse(Console.ReadLine());
        int count = 0;

        while (n != 0)
        {
            n /= 10;
            count++;
        }

        Console.WriteLine("Digits: " + count);
    }
}