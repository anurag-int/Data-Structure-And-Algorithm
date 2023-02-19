import java.io.*;
import java.util.Scanner;
class SuperClass
{
    public void display()
    {
        System.out.println("Hello this is the method of the Superclass");
    }
}

class SubClass extends SuperClass
{
    public void greet()
    {
        System.out.println("Hello this is the method of SubClass");
    }

    public static void main(String args[])
    {
        SubClass obj = new SubClass();
        obj.display();
        obj.greet();
    }
}