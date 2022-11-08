import java.lang.reflect.Array;
import java.util.ArrayList;

import javax.lang.model.type.ArrayType;

public class al {
    public static void main(String[] args){
        ArrayList <String> arrayList = new ArrayList<String>();
        arrayList.add("Ayush Singh");
        arrayList.add("Pillai Nayar");
        arrayList.add("Atif Ansari");

        arrayList.sort(null);

        // Sorted arrayList
        for (String i : arrayList) {
            System.out.println(i);
        }

        // Reverse Sorted arrayList
        for (int i = arrayList.size() - 1; i >= 0; i--) {
            System.out.println(arrayList.get(i));
        }
        
        Object[] array = new Object[arrayList.size()];
        array = arrayList.toArray();
        
        arrayList.sort(arrayList, (str1, str2) -> str1.charAt(0) - str2.charAt(0));
    }
}
