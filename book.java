

class box{
    double l,b,h;
    

box (double l,double b,double h)
{
    this.l= l;
    this.b= b;
    this.h= h;
}
box(double l)
{
   this.l=b=h=l;
}
double volume()
    {
        return l*b*h;
    }


void print()
{
    System.out.println("METHOD OVERLOADING");
}
void print(double v)
{
    System.out.println("VOLUME OF BOX="+v);
}
}
public class book{
    public static void main(String[] args) {
        double r1,r2;
        box ob1= new box(10.0,20.0,10.0 );
        box ob2= new box(20);
        r1=ob1.volume();
        r2=ob2.volume();
        ob1.print();
        
        ob1.print(r1);
        ob2.print(r2);

    }
        
    
}