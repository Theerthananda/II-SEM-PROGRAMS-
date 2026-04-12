using System;

class Program6
{
    static void Main()
    {
       
        int a = 10;
        double b = a; // implicit
        Console.WriteLine("int to double: " + b);

 
        int x = 25;
        float y = x; // implicit
        Console.WriteLine("int to float: " + y);

  
        char ch = 'A';
        int ascii = ch; // implicit
        Console.WriteLine("char to int (ASCII): " + ascii);

     
        int num = 100;
        long bigNum = num; // implicit
        Console.WriteLine("int to long: " + bigNum);
    }
}