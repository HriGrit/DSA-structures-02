import java.io.*;
import java.util.*;

class book{
    String title;
    String author;
    int pages;
    int price;
    String publisher;
    int year;
    String isbn;
    String language;
    String genre;

    public book(String title, String author, int pages, int price, String publisher, int year, String isbn, String language, String genre){
        this.title = title;
        this.author = author;
        this.pages = pages;
        this.price = price;
        this.publisher = publisher;
        this.year = year;
        this.isbn = isbn;
        this.language = language;
        this.genre = genre;
    }
}

class user{
    String type;
    String name;
    String email;
    String address;
    String phone;
    String reg_no;

    public user(String type, String name, String email, String address, String phone, String reg_no){
        this.type = type;
        this.name = name;
        this.email = email;
        this.address = address;
        this.phone = phone;
        this.reg_no = reg_no;
    }

    public void display(){
        System.out.println("Type: " + type);
        System.out.println("Name: " + name);
        System.out.println("Email: " + email);
        System.out.println("Address: " + address);
        System.out.println("Phone: " + phone);
        System.out.println("Registration Number: " + reg_no);
    }
}

class allocation{
    String type;
    String book;
    static int maxbooks = 0;
    String name;
    String reg_no;

    public allocation(String type, String book, String name, String reg_no){
        this.type = type;
        this.book = book;
        this.name = name;
        this.reg_no = reg_no;
    }

    void allocate(){
        if (type.equalsIgnoreCase("regular")){ maxbooks = 5; }
        else if (type.equalsIgnoreCase("irregular")){ maxbooks = 3; }
        else if (type.equalsIgnoreCase("poor")){ maxbooks = 1; }
        else{ System.out.println("Invalid user type"); }
    }

    void give(){
        if (maxbooks > 0){
            System.out.println("Book " + book + " is given to " + name);
            maxbooks--;
        }
        else{
            System.out.println("No books left");
        }
    }
}

class library {
    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("fale.txt");
        Scanner sc = new Scanner(file);
        
        while (sc.hasNextLine()){
            String line = sc.nextLine();
            String[] words = line.split(" ");
            if (words[0].equalsIgnoreCase("book")){
                book b = new book(words[1], words[2], Integer.parseInt(words[3]), Integer.parseInt(words[4]), words[5], Integer.parseInt(words[6]), words[7], words[8], words[9]);
                System.out.println("Book added");
            }
            else if (words[0].equalsIgnoreCase("user")){
                // add reigstration number in end
                user u = new user(words[1], words[2], words[3], words[4], words[5], words[6]);
                u.display();
            }
            else if (words[0].equalsIgnoreCase("allocate")){
                allocation a = new allocation(words[1], words[2], words[3], words[4]);
                a.allocate();
                a.give();
            }
            else{
                System.out.println("Invalid input");
            }
        }

        sc.close();
    }
}