using System;

class Program4
{
    static void Main()
    {
        int x = 10;
        object obj = x; // boxing

        int y = (int)obj; // unboxing

        Console.WriteLine(y);
    }
}