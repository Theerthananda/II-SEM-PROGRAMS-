using System;

class Program12
{
    static void Main()
    {
        Console.WriteLine("Enter a number:");
        int n = int.Parse(Console.ReadLine());
        bool isPrime = true;
        int largestFactor = 1;

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                largestFactor = i;
            }
        }

        if (isPrime)
            Console.WriteLine("Prime");
        else
            Console.WriteLine("Largest factor: " + largestFactor);
    }
}