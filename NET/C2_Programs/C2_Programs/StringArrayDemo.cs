using System;

namespace StringArrayProgram
{
    class StringArrayDemo
    {
        static void Main(string[] args)
        {
            string[] names = { "Rahul", "Anu", "Kiran", "Sneha" };

            Console.WriteLine("Names in String Array:");

            for (int i = 0; i < names.Length; i++)
            {
                Console.WriteLine(names[i]);
            }

        }
    }
}