using System;

namespace StaticConstructorProgram
{
    class Student
    {
        static int collegeCode;
        int id;
        string name;

        static Student()
        {
            collegeCode = 1001;
            Console.WriteLine("Static Constructor Called");
        }

        public Student(int i, string n)
        {
            id = i;
            name = n;
        }

        public void Display()
        {
            Console.WriteLine("ID: " + id);
            Console.WriteLine("Name: " + name);
            Console.WriteLine("College Code: " + collegeCode);
            Console.WriteLine();
        }
    }

    class StaticConstructorDemo
    {
        static void Main(string[] args)
        {
            Student s1 = new Student(101, "Rahul");
            Student s2 = new Student(102, "Suraj");

            s1.Display();
            s2.Display();
        }
    }
}