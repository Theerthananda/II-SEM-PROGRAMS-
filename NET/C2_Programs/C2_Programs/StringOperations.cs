using System;

namespace StringOperationProgram
{
    class StringOperations
    {
        static void Main(string[] args)
        {
            string str1 = "Hello";
            string str2 = "World";

        
            string result = str1 + " " + str2;
            Console.WriteLine("Concatenation: " + result);

        
            Console.WriteLine("Length of str1: " + str1.Length);

            Console.WriteLine("Uppercase: " + str1.ToUpper());

       
            Console.WriteLine("Lowercase: " + str2.ToLower());

       
            Console.WriteLine("Compare Strings: " + str1.Equals(str2));

        
            Console.WriteLine("Substring: " + result.Substring(0, 5));

            Console.ReadLine();
        }
    }
}