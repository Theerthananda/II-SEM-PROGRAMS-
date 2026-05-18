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

            Console.WriteLine("Contains 'Hello': " + result.Contains("Hello"));

            Console.WriteLine("Replace: " + result.Replace("World", "C#"));

            string str3 = "   Welcome   ";
            Console.WriteLine("Trim: " + str3.Trim());

            Console.WriteLine("StartsWith Hello: " + result.StartsWith("Hello"));

            Console.WriteLine("EndsWith World: " + result.EndsWith("World"));

            Console.WriteLine("IndexOf o: " + result.IndexOf('o'));

            Console.WriteLine("Insert: " + result.Insert(5, " Beautiful"));

            Console.WriteLine("Remove: " + result.Remove(5, 6));

            Console.ReadLine();
        }
    }
}