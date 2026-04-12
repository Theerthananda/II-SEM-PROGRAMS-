using System;

class Program2
{
    static void Main()
    {
  
        double x = 9.7;
        int y = Convert.ToInt32(x);
        Console.WriteLine("Double to Int: " + y);


        string s = "123";
        int num = Convert.ToInt32(s);
        Console.WriteLine("String to Int: " + num);


        int a = 10;
        double d = Convert.ToDouble(a);
        Console.WriteLine("Int to Double: " + d);


        int val = 65;
        char c = Convert.ToChar(val);
        Console.WriteLine("Int to Char: " + c);
    }
}