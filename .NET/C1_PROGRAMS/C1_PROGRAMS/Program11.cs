using System;

class Program11
{
    static void Main()
    {
        Console.WriteLine("Enter a number (1-7) for the day of the week:");
        int day=int.Parse(Console.ReadLine());

        switch (day)
        {
            case 1: Console.WriteLine("Monday"); break;
            case 2: Console.WriteLine("Tuesday"); break;
            default: Console.WriteLine("Invalid");break;
        }
    }
}