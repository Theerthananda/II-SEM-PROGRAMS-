using System;

class Program17
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());

        int small = 0, large = 0;

        for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
        {
            if (small == 0 && n % i == 0)
                small = i;

            if (large == 0 && n % j == 0)
                large = j;

            if (small != 0 && large != 0)
                break;
        }

        Console.WriteLine("Smallest factor: " + small);
        Console.WriteLine("Largest factor: " + large);
    }
}