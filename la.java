import java.util.ArrayList;

class Book{
    String name;
    String author;
    double price;
    String type;

    public Book(String name, String author, double price, String type){
        this.name = name;
        this.author = author;
        this.price = price;
        this.type = type;
    }
}

public class la {
    public static void main(String[] args) {
        ArrayList <Book> fiction = new ArrayList<Book>();
        ArrayList <Book> comic = new ArrayList<Book>();
        ArrayList <Book> cooking = new ArrayList<Book>();

        Book b1 = new Book("Harry Potter", "J.K. Rowling", 100, "fiction");
        Book b2 = new Book("The Lord of the Rings", "J.R.R. Tolkien", 200, "fiction");
        Book b3 = new Book("The Hobbit", "J.R.R. Tolkien", 300, "cooking");
        Book b4 = new Book("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", 400, "comic");
        
        fiction.add(b1);
        fiction.add(b2);

        comic.add(b4);

        cooking.add(b3);

        System.out.println("Fiction Books:");
        for (Book i : fiction) {
            System.out.println(i.name);
        }

        System.out.println("Comic Books:");
        for (Book i : comic) {
            System.out.println(i.name);
        }

        System.out.println("Cooking Books:");
        for (Book i : cooking) {
            System.out.println(i.name);
        }

        // Sorting based on Book name
        fiction.sort((b11, b22) -> b11.name.compareTo(b22.name));
        comic.sort((b11, b22) -> b11.name.compareTo(b22.name));
        cooking.sort((b11, b22) -> b11.name.compareTo(b22.name));

        // Finding min and max price book
        double min = fiction.get(0).price;
        double max = fiction.get(0).price;
        for (Book i : fiction) {
            if(i.price < min){
                min = i.price;
            }
            if(i.price > max){
                max = i.price;
            }
        }
        for (Book i : fiction) {
            if(i.price == min){
                System.out.println("Minimum price book in fiction is: " + i.name);
            }
            if(i.price == max){
                System.out.println("Maximum price book in fiction is: " + i.name);
            }
        }

        for (Book i : comic) {
            if(i.price < min){
                min = i.price;
            }
            if(i.price > max){
                max = i.price;
            }
        }
        for (Book i : comic) {
            if(i.price == min){
                System.out.println("Minimum price book in comic is: " + i.name);
            }
            if(i.price == max){
                System.out.println("Maximum price book in comic is: " + i.name);
            }
        }

        for (Book i : cooking) {
            if(i.price < min){
                min = i.price;
            }
            if(i.price > max){
                max = i.price;
            }
        }
        for (Book i : cooking) {
            if(i.price == min){
                System.out.println("Minimum price book in cooking is: " + i.name);
            }
            if(i.price == max){
                System.out.println("Maximum price book in cooking is: " + i.name);
            }
        }
    } 
}
