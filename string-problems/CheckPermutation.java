import java.util.Arrays;

// Method - 1
// public class CheckPermutation {
//     private static String sort(String str) {
//         char[] chars = str.toCharArray();
//         Arrays.sort(chars);
//         return new String(chars);
//     }
//     public static void main(String[] args) {
//         String s = "abc";
//         String t = "bci";

//         if(s.length() != t.length()) {
//             System.out.println("s is not a permutation of t");
//         } else {
//             if(sort(s).equals(sort(t))) System.out.println("s is permutation of t");
//             else System.out.println("s is not a permutation of t");
//         }
//     }
// }

// Method - 2

public class CheckPermutation {

    private static boolean permutation(String s, String t) {
        if(s.length() != t.length()) return false;

        int[] letters = new int[128];

        char[] chars = s.toCharArray();
        for(char ch : chars) {
            letters[ch]++;
        }

        for(int i = 0; i < t.length(); i++) {
            int c = (int) t.charAt(i);
            letters[c]--;
            if(letters[c] < 0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        String s = "abu";
        String t = "bca";
        boolean res = permutation(s, t);
        System.out.println(res);

    }
}

