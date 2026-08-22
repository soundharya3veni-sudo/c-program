import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = Integer.parseInt(sc.nextLine());
        HashMap<String, String> phoneBook = new HashMap<String, String>();

        // Store entries
        for (int i = 0; i < n; i++) {
            String name = sc.nextLine();
            String number = sc.nextLine();
            phoneBook.put(name, number);
        }

        // Process queries until EOF
        while (sc.hasNextLine()) {
            String query = sc.nextLine();

            if (phoneBook.containsKey(query)) {
                System.out.println(query + "=" + phoneBook.get(query));
            } else {
                System.out.println("Not found");
            }
        }

        sc.close();
    }
}
