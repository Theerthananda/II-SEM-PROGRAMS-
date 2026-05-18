using System;

class MyClass1
{
    public int x;
  
    public MyClass1(int i)
    {
        x = i;
    }
}

class ParameterizedConstructor
{
    static void Main()
    {
        MyClass1 t1 = new MyClass1(10);
        MyClass1 t2 = new MyClass1(88);

        Console.WriteLine(t1.x + "\n " + t2.x);
    }
}