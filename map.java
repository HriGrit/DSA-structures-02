
import java.util.HashMap;
import java.util.Map;

public class map {
    public static void main(String[] args) {
        Map <String, String> h1 = new HashMap<String, String>();
        h1.put("Ayush Singh", "Economics");
        h1.put("Pillai Nayar", "Maths");
        h1.put("Atif Ansari", "LC");

        Map <String, String> h2 = new HashMap<String, String>();
        h2.put("Economics", "Jaymala Sheety");
        h2.put("Maths", "Rajesh Kumar");
        h2.put("LC", "Mammothy");

        // Adding student to h1
        h1.put("Rahul Gupta", "Maths");
        h1.remove("Pillai Nayar");

        // Iterating over h1
        for (Map.Entry<String, String> entry : h1.entrySet()) {
            String key = entry.getKey();
            String value = entry.getValue();
            System.out.println(key + " : " + value);
        }
        System.out.println("\n");
        // Iterating over h2
        for (Map.Entry<String, String> entry : h2.entrySet()) {
            String key = entry.getKey();
            String value = entry.getValue();
            System.out.println(key + " : " + value);
        }
        System.out.println("\n");
        // Given h1 name finding the course
        String name = "Ayush Singh";
        String course = h1.get(name);

        System.out.println(h2.get(course));
    }
}
