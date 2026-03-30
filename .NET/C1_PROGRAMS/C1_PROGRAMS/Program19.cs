using System;

class Program19
{
    static void Main()
    {
        int a = 10, b = 5;

        // 1. Arithmetic Operators
        Console.WriteLine("Arithmetic:");
        Console.WriteLine("a + b = " + (a + b));
        Console.WriteLine("a - b = " + (a - b));
        Console.WriteLine("a * b = " + (a * b));
        Console.WriteLine("a / b = " + (a / b));
        Console.WriteLine("a % b = " + (a % b));

        // 2. Relational Operators
        Console.WriteLine("\nRelational:");
        Console.WriteLine("a > b = " + (a > b));
        Console.WriteLine("a < b = " + (a < b));
        Console.WriteLine("a == b = " + (a == b));
        Console.WriteLine("a != b = " + (a != b));

        // 3. Logical Operators
        Console.WriteLine("\nLogical:");
        Console.WriteLine("(a > 5 && b < 10) = " + (a > 5 && b < 10));
        Console.WriteLine("(a > 5 || b > 10) = " + (a > 5 || b > 10));
        Console.WriteLine("!(a > b) = " + !(a > b));

        // 4. Assignment Operators
        Console.WriteLine("\nAssignment:");
        int x = a;
        x += b;
        Console.WriteLine("x += b → " + x);

        // 5. Increment / Decrement
        Console.WriteLine("\nIncrement/Decrement:");
        Console.WriteLine("++a = " + (++a));
        Console.WriteLine("b-- = " + (b--));
        Console.WriteLine("After b-- = " + b);

        // 6. Bitwise Operators
        Console.WriteLine("\nBitwise:");
        Console.WriteLine("a & b = " + (a & b));
        Console.WriteLine("a | b = " + (a | b));
        Console.WriteLine("a ^ b = " + (a ^ b));

        // 7. Conditional (Ternary) Operator
        Console.WriteLine("\nConditional:");
        string result = (a > b) ? "a is greater" : "b is greater";
        Console.WriteLine(result);

        // 8. Special Operators (typeof, sizeof)
        Console.WriteLine("\nSpecial:");
        Console.WriteLine("Type of a: " + typeof(int));
        Console.WriteLine("Size of int: " + sizeof(int));
    }
}