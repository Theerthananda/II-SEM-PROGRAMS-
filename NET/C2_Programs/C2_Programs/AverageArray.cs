using System;

class AverageArray
{
    static void Main()
    {
        int[] nums = new int[10];
        int sum = 0;
        int avg;
        Console.WriteLine("How many numbers do you want to enter? (Max 10): ");
        int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++)
        {
            Console.Write("Enter number " + (i + 1) + ": ");
            nums[i] = int.Parse(Console.ReadLine());
        }

        for (int i = 0; i < 10; i++)
        {
            sum = sum + nums[i];
        }
        avg = sum / 10;

        Console.WriteLine("Average: " + avg);

    }
}