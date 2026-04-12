using System;

class Program2
{
    static void Main()
    {
      
        double a = 9.7;
        int b = (int)a;
        Console.WriteLine("Double to Int: " + b);

     
        float f = 12.8f;
        int i = (int)f;
        Console.WriteLine("Float to Int: " + i);

        
        int x = 65;
        char c = (char)x;
        Console.WriteLine("Int to Char: " + c);

        int m = 20;
        double d = (double)m;
        Console.WriteLine("Int to Double: " + d);

        long big = 100000;
        int small = (int)big;
        Console.WriteLine("Long to Int: " + small);
    }
}