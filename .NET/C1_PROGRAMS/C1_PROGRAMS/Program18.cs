using System;

class Program18
{
    public void Run()
    {
        int a = 1;

       
        bool condition = true;

        while (condition)
        {
            Console.WriteLine(a);
            a++;

            if (a > 5)
                condition = false;
        }
    }
}