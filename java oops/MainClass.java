import java.security.Permission;
import java.security.PublicKey;

public class MainClass 
{
    public static void main(String[] args)
    {
        // Person p1 = new Person();
        // p1.age = 19;
        // p1.name = "Anurag Gupta";

        // Person p2 = new Person();
        // p2.age = 20;
        // p2.name = "Virat Kholi";

        // System.out.println(p1.age + " " + p1.name);
        // System.out.println(p2.age + " " + p2.name);

       // System.out.println(Person.count);

       Person p1 = new Person(18,"Anurag");
       System.out.println(Person.count);

        p1.eat();
        
        // p2.walk();
        // p2.walk(2);

        Developers d1 = new Developers(25, "Anuj");
        d1.walk();
        
    }
}


class Developers extends Person
{
    public Developers(int age, String name)
    {
        super(age, name); // used to call constructor of the parent class
    }   

    void walk()
    {
        System.out.println("Developer " + name + " is walking.");
    }
}

class Person
{
    // properties
    String name;
    int age;
    static int count;

    //constructor - it is used to initialize the properties in the objects.
    public Person()
    {
        count++;
        System.out.println("Creating an object");
    }

    //constructor 2
    public Person(int age, String name)
    {
        this(); // calling the constructor in which we are not passing the parameters.
        this.age = age;
        this.name = name;
    }

    void walk()
    {
        System.out.println(name + " is walking.");
    }

    void eat()
    {
        System.out.println(name + " is eating.");
    }

    void walk(int steps)
    {
        System.out.println(name + " walked " + steps);
    }
}
