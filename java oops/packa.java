package employee;
import java.io.*;
import java.util.*;

public Emp_Data
{
    String name;
    int emp_id;
    Emp_Data(String n, int id)
    {
        name = n;
        emp_id = id;

    }
    void display()
    {
        System.out.println("name = " + name)
    }
}
