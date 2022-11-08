import java.util.Scanner;
abstract class WM{
    abstract public void Wash();
    abstract public void Rinse(int loadsize);
    abstract public void Spin(int speed);
}
class Whirlpool extends WM{
    public void Wash(){
        
    }
    public void Rinse(int loadsize){
        try{
            int data = loadsize;
        }
        catch(ArithmeticException e){
            System.out.println("Enter the values in int form.");
        }
    }
    public void Spin(int speed){
        try{
            int data = speed;
        }
        catch(ArithmeticException e){
            System.out.println("Enter the values in int form.");
        }
    }
    void Warmdry(){

   }
}
class IFB extends WM{
    public void Wash(){
        
    }
    public void Rinse(int loadsize){
        try{
            int data = loadsize;
        }
        catch(ArithmeticException e){
            System.out.println("Enter the values in int form.");
        }
    }
    public void Spin(int speed){
        try{
            int data = speed;
        }
        catch(ArithmeticException e){
            System.out.println("Enter the values in int form.");
        }
    }
    void Warmdry(){

   }
}
class LG extends WM{
    public void Wash(){
        
    }
    public void Rinse(int loadsize){
        try{
            int data = loadsize;
        }
        catch(ArithmeticException e){
            System.out.println("Enter the values in int form.");
        }
    }
    public void Spin(int speed){
        try{
            int data = speed;
        }
        catch(ArithmeticException e){
            System.out.println("Enter the values in int form.");
        }
    }
    void Warmdry(){
    }
}
public class Washmac{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int loadsize;
        loadsize = in.nextInt();
        int speed;
        speed = in.nextInt();

        Whirlpool w = new Whirlpool();
        w.Rinse(loadsize);
        w.Spin(speed);

        IFB i = new IFB();
        i.Rinse(loadsize);
        i.Spin(speed);
        
        LG l = new LG();
        l.Rinse(loadsize);
        l.Spin(speed);
    }
}