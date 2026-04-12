using System;

class Program5
{
    static void Main()
    {
       
        string path1 = @"C:\Users\Programmer\Files";
        Console.WriteLine("Verbatim Path: " + path1);

        string path2 = "C:\\Users\\Programmer\\Files";
        Console.WriteLine("Escape Path: " + path2);

        string path3 = @"D:\Projects\CSharp\Program5";
        Console.WriteLine("Project Path: " + path3);

       
        string path4 = @"C:\Users\Programmer\Documents\file.txt";
        Console.WriteLine("File Path: " + path4);

        string message = @"File saved at C:\Temp\output.txt";
        Console.WriteLine("Message: " + message);

        string url = @"https://www.example.com/files";
        Console.WriteLine("URL: " + url);
    }
}