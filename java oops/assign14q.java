interface pet
{
    String getName();
    void setName(String n);
    void play();
}
class Animal
{
    int legs;
    void animal_legs(int n)
    {
        this.legs = n;
    }
    void walk(){
        System.out.println("Walking...");
    }
    void eat()
    {
        System.out.println("Eating....");
    }
    
    void printLegs()
    {
        System.out.println(legs);
    }
}
class cat extends Animal implements pet{
    String CatName;
    void Cat()
    {
        System.out.println("Meow");
    }
    public String getName()
    {
        return CatName;
    }
    public void setName(String n)
    {
        CatName = n;
    }
    public void play()
    {
        System.out.println("Cat Playing..");
    }
    void eat()
    {
        System.out.println("Eating");
    }
}
    class fish extends Animal implements pet{
        String FishName;
        public String getName(){
            return FishName;
        }
        public void setName(String n){
            FishName = n;
        }
        public void play()
        {
            System.out.println("Fish playing..");
        }
    }
    class spider extends Animal{
        void eat()
        {
            System.out.println("Eating...");
        }
    }
public class assign14q
{
    public static void main(String[] args)
    {
        
                cat adi=new cat();
                adi.setName("Billi");
                System.out.println(adi.getName());
                adi.animal_legs(6);
                adi.printLegs();
                adi.play();
                fish sourabh=new fish();
                sourabh.animal_legs(9);
                sourabh.printLegs();
                sourabh.setName("Sheetal");
                System.out.println(sourabh.getName());
        
    }
}