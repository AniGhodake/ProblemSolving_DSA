import java.util.Arrays;
import java.util.List;

class TrieNode {

    // Java Makes sure that all 26 are null
    TrieNode[] child = new TrieNode[26];

    // for end of word
    boolean wordEnd = false;
}

class GfG {

    // Method to insert a key into the Trie
    static void insertKey(TrieNode root, String key) {

        // Initialize the curr pointer with the root node
        TrieNode curr = root;

        // Iterate across the length of the string
        for (char c : key.toCharArray()) {

            // Check if the node exists for the 
            // current character in the Trie
            if (curr.child[c - 'a'] == null) {

                // If node for current character does 
                // not exist then make a new node
                TrieNode newNode = new TrieNode();

                // Keep the reference for the newly
                // created node
                curr.child[c - 'a'] = newNode;
            }

            // Move the curr pointer to the
            // newly created node
            curr = curr.child[c - 'a'];
        }

        // Mark the end of the word
        curr.wordEnd = true;
    }

    // Method to search a key in the Trie
    static boolean searchKey(TrieNode root, String key) {

        // Initialize the curr pointer with the root node
        TrieNode curr = root;

        // Iterate across the length of the string
        for (char c : key.toCharArray()) {

            // Check if the node exists for the 
            // current character in the Trie
            if (curr.child[c - 'a'] == null) 
                return false;

            // Move the curr pointer to the 
            // already existing node for the 
            // current character
            curr = curr.child[c - 'a'];
        }

        // Return true if the word exists 
        // and is marked as ending
        return curr.wordEnd;
    }

    public static void main(String[] args) {

        // Create an example Trie
        TrieNode root = new TrieNode();
        List<String> arr = Arrays.asList(
            "and", "ant", "do", "geek", "dad", "ball");
        for (String s : arr) {
            insertKey(root, s);
        }

        // One by one search strings
        List<String> searchKeys = 
              Arrays.asList("do", "gee", "bat");
        for (String s : searchKeys) {
            System.out.println("Key : " + s);
            if (searchKey(root, s)) 
                System.out.println("Present");
            else 
                System.out.println("Not Present");        
        }
    }
}