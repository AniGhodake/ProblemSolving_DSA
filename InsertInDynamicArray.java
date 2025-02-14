import java.util.ArrayList;
import java.util.Scanner;

public class InsertInDynamicArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Create a dynamic list
        ArrayList<Integer> list = new ArrayList<>();

        // Input size and elements
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }

        // Input the element and position
        System.out.print("Enter the element to insert: ");
        int element = sc.nextInt();
        System.out.print("Enter the position (0-based index): ");
        int pos = sc.nextInt();
        sc.close();

        // Validate position
        if (pos < 0 || pos > list.size()) {
            System.out.println("Invalid position!");
            return;
        }

        // Insert element dynamically
        list.add(pos, element);

        // Print updated list
        System.out.println("List after insertion: " + list);
    }
}
