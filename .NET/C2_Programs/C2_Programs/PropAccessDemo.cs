using System;

class PropAccess
{
    int prop; // field being managed by MyProp

    public PropAccess()
    {
        prop = 0;
    }

    // Property
    public int MyProp
    {
        get
        {
            return prop;
        }
        private set
        {   // private setter
            prop = value;
        }
    }

    // Method to increment property
    public void IncrProp()
    {
        MyProp++;   // allowed inside class
    }
}

// Demo class
class PropAccessDemo
{
    static void Main()
    {
        PropAccess ob = new PropAccess();

        Console.WriteLine("Original value of ob.MyProp: " + ob.MyProp);

        // ob.MyProp = 100; // ❌ Not allowed (private set)

        ob.IncrProp();

        Console.WriteLine("Value after increment: " + ob.MyProp);
    }
}