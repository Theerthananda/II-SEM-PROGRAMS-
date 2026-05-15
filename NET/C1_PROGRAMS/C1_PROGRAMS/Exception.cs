using System;

class Exception
{
    static void Main(string[] args)
    {
        int a, b, result;

        try
        {
            Console.Write("Enter First Number : ");
            a = int.Parse(Console.ReadLine());

            Console.Write("Enter Second Number : ");
            b = int.Parse(Console.ReadLine());

            result = a / b;

            Console.WriteLine("Result = " + result);
        }

        catch (DivideByZeroException)
        {
            Console.WriteLine("Cannot divide by zero");
        }

        catch (FormatException)
        {
            Console.WriteLine("Invalid Input");
        }

        finally
        {
            Console.WriteLine("Program Ended");
        }

        Console.ReadLine();
    }
}