class Outer
{
    int outer_x=100;
    class Inner
    {
        int Inner_y=200;
        void imethod()
        {
            System.out.println("Aceessing from inner class");
            System.out.println(outer_x);
            System.out.println(Inner_y+outer_x);
        }
    }
    void display()
    {
        Inner ob1=new Inner();
        System.out.println("The value of inner class variable"+ob1.Inner_y);
        System.out.println("The value of inner class variable"+outer_x);

    }
}
public class area {
    public static void main(String[] args) {
        Outer obname=new Outer();
        obname.display();
        Outer.Inner obj2=obname.new Inner();
        obj2.imethod();

    }
    
}
