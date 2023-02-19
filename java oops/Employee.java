class Employee
{
    //properties
    int refno;
    String refname;

    //constructor
    Employee (int i, String n)
    {
        refno = i;
        refname = n;
    }

    // same class name but diffrent parameters
    Employee (Employee e)          
    {
        refno = e.refno;
        refname = e.refname;
    }


    void display()
    {
        System.out.println("refno : " + refno + ", refname : " + refname);
    }


    public static void main(String [] args)
    {
        Employee e1 = new Employee(12, "Anurag");
        Employee e2 = new Employee(e1);
        e1.display();
        e2.display();
    }
}