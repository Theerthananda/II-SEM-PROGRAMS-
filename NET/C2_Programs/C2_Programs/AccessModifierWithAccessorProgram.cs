using System;

namespace AccessorDemo
{
    class Student
    {
        private int marks;

        public int Marks
        {
            get
            {
                return marks;
            }

            set
            {
                if (value >= 0 && value <= 100)
                {
                    marks = value;
                }
                else
                {
                    Console.WriteLine("Invalid Marks");
                }
            }
        }
    }

    class AccessModifierWithAccessorProgram
    {
        static void Main(string[] args)
        {
            Student s = new Student();

            s.Marks = 85;
            Console.WriteLine("Student Marks: " + s.Marks);

            s.Marks = -90;

            Console.ReadLine();
        }
    }
}