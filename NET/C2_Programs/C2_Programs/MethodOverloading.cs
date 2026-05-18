using System;

class MethodOverloading
{
    void Sum(int a, int b)
    {
        Console.WriteLine("Sum of 2 numbers = " + (a + b));
    }

    void Sum(int a, int b, int c)
    {
        Console.WriteLine("Sum of 3 numbers = " + (a + b + c));
    }

    void Sum(int a, int b, int c, int d)
    {
        Console.WriteLine("Sum of 4 numbers = " + (a + b + c + d));
    }

    static void Main()
    {
        MethodOverloading obj = new MethodOverloading();

        obj.Sum(10, 20);
        obj.Sum(10, 20, 30);
        obj.Sum(10, 20, 30, 40);
    }
}