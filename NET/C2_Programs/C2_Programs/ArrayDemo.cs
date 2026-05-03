using System;

class ArrayDemo
{
    static void Main()
    {
        int[] sample = new int[10];
        int i;

        // Assign values
        for (i = 0; i < 10; i++)
            sample[i] = i;

        // Display values
        for (i = 0; i < 10; i++)
            Console.WriteLine("sample[" + i + "] : " + sample[i]);
    }
}