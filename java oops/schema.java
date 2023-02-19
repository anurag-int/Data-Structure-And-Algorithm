import java.io.*;
import java.util.Scanner;
class Employee
{   
    String name,address;
    int id;
    
    void getName(String n)
    {
        this.name = n;  
        System.out.println(name);
    }
    
    void getAddress(String a)
    {
        address = a;
    }
    
    void getID(int i)
    {
        this.id = i;
    }
    void display()
    {
        System.out.println("Name : " + name + ", id : " + id + ", address : " + address);
    }
    
}

class Student extends Employee 
{
    String course, depth;
    int vsem;
    float cgpa;
    
    void getDept(String c,String d)
    {
        String course = c;
        String depth = d;
    }
    
    void getDetails(int s,float cgp)
    {
        int sem = s;
        float cgpa = cgp;
    }
    
}

class Teachers extends Employee
{
    String depth;
    float salary;
    
    void getDepthAndSalary(String d,float s)
    {
        this.depth = d;
        this.salary = s;
    }

    void display()
    {
        System.out.println(depth + " " + salary);
    }
}


class schema
{
    public static void main(String [] args)
    {
        Employee e = new Employee();
        e.getID(1001);
        e.getName("Sourabh(Bablu)");
        e.getAddress("Railway Colony");
        e.display();


        Teachers t1 = new Teachers();
        t1.getDepthAndSalary("LAAND", 8.345F);
        t1.display();



    }
}