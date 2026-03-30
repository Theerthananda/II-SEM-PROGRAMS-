using System;

class Program8
{
    static void Main()
    {
        int a = 5;

        Console.WriteLine("Prefix: " + (++a));
        Console.WriteLine("Postfix: " + (a++));
        Console.WriteLine("After: " + a);
    }
}