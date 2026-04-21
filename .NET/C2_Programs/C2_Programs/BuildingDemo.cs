using System;

class Building
{
    public int Floors;     // number of floors
    public int Area;       // total area
    public int Occupants;  // number of people

    // Parameterized constructor
    public Building(int f, int a, int o)
    {
        Floors = f;
        Area = a;
        Occupants = o;
    }

    // Area per person
    public int AreaPerPerson()
    {
        return Area / Occupants;
    }

    // Maximum occupants based on minimum area
    public int MaxOccupant(int minArea)
    {
        return Area / minArea;
    }
}

class BuildingDemo
{
    static void Main()
    {
        Building house = new Building(2, 2500, 4);
        Building office = new Building(3, 4200, 25);

        Console.WriteLine("Max occupants for house: " + house.MaxOccupant(300));
        Console.WriteLine("Max occupants for office: " + office.MaxOccupant(300));
    }
}