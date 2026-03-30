using System;

class Program14
{
    static void Main()
    {
        Console.WriteLine("Enter a number:");
        int n = int.Parse(Console.ReadLine());

        do
        {
            Console.Write(n % 10);
            n /= 10;
        } while (n != 0);
    }
}