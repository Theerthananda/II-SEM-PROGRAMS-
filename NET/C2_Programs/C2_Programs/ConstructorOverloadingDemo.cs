using System;

namespace ConstructorOverloadingProgram
{
    class Student
    {
        int id;
        string name;

        public Student()
        {
            id = 0;
            name = "Unknown";
        }

        public Student(int i)
        {
            id = i;
            name = "Not Assigned";
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
            Console.WriteLine();
        }
    }

    class ConstructorOverloadingDemo
    {
        static void Main(string[] args)
        {

            Student s1 = new Student();

  
            Student s2 = new Student(101);

    
            Student s3 = new Student(102, "Rahul");

            Console.WriteLine("Default Constructor:");
            s1.Display();

            Console.WriteLine("One Parameter Constructor:");
            s2.Display();

            Console.WriteLine("Two Parameter Constructor:");
            s3.Display();
        }
    }
}