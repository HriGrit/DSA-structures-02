
import java.io.*;

class Employee implements java.io.Serializable{
    public String name;
    public int id;
    public String school_name;
    public String mail;
    public String address;
    
    Employee(String name, int id, String school_name, String mail, String address){
        this.name = name;
        this.id = id;
        this.school_name = school_name;
        this.mail = mail;
        this.address = address;
    }
}

class myInfo implements java.io.Serializable{
    String regno;
    String name;
    float cgpa;
    int phoneno;
    String hobbies;

    // Constructor
    myInfo(String regno, String name, float cgpa, int phoneno, String hobbies){
        this.regno = regno;
        this.name = name;
        this.cgpa = cgpa;
        this.phoneno = phoneno;
        this.hobbies = hobbies;
    }
}

public class work {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        // FileWriter fw = new FileWriter("C:\\Users\\batch1\\Documents\\NetBeansProjects\\JavaApplication13\\src\\javaapplication13\\fale.txt");
        // FileReader fr = new FileReader("C:\\Users\\batch1\\Documents\\NetBeansProjects\\JavaApplication13\\src\\javaapplication13\\fale.txt");
        
       myInfo myself = new myInfo("21BCE1234", "Rahul", 8.5f, 1234567890, "Reading");
       myInfo bestfriend = new myInfo("21BCE1235", "Rohan", 8.5f, 1234567891, "Reading");
        
        FileOutputStream fos = new FileOutputStream("C:\\Users\\batch1\\Documents\\NetBeansProjects\\JavaApplication13\\src\\javaapplication13\\fale.txt");
        ObjectOutputStream oos = new ObjectOutputStream(fos);
        
       oos.writeObject(myself);
       oos.writeObject(bestfriend);
        
        oos.close();
        fos.close();
        
        FileInputStream fis = new FileInputStream("C:\\Users\\batch1\\Documents\\NetBeansProjects\\JavaApplication13\\src\\javaapplication13\\fale.txt");
        ObjectInputStream ois = new ObjectInputStream(fis);
        
        myInfo myself1 = (myInfo)ois.readObject();
        myInfo bestfriend1 = (myInfo)ois.readObject();

        System.out.println("Myself: " + myself1.name + " " + myself1.regno + " " + myself1.cgpa + " " + myself1.phoneno + " " + myself1.hobbies);
        System.out.println("Bestfriend: " + bestfriend1.name + " " + bestfriend1.regno + " " + bestfriend1.cgpa + " " + bestfriend1.phoneno + " " + bestfriend1.hobbies);
        
        ois.close();
        fis.close();
    }
    
}
