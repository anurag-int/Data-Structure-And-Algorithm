class Animal
{
    Animal()
    {
        System.out.println("Hello I am Animal");
    }
    void eat()
    {
        System.out.println("Eating");
    }
}

class Dog extends Animal
{
    Dog()
    {
        System.out.println("hELLO i AM dOG");
    }
    void bark()
    {
        System.out.println("Barking");
    }

}

class Cat extends Animal
{
    Cat()
    {
        System.out.println("Hello I am Cat");
    }
    void play()
    {
        System.out.println("Playing with Mouse");
    }
}


class pet extends Animal implements Dog, Cat
{

}
class java1
{
    public static void main(String[] args) {
        Dog d = new Dog();
        d.eat();
    }
}