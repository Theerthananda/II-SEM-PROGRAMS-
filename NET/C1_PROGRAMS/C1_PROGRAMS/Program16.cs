using System;

class Program16
{
    static void Main()
    {
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                if (j == 2)
                    break;

                Console.WriteLine(i + " " + j);
            }
        }
    }
}