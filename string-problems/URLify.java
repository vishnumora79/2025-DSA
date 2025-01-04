// public class URLify {
//     private static String replace(char[] str, int len) {
//         int spaces = 0, index, i;
//         for(i = 0; i < len; i++) {
//             if(str[i] == ' ') spaces++;
//         }
//         index = len + spaces * 2;
//         if(index >  str.length) throw new IllegalArgumentException("Insufficient space in char array");
//         for(i = len - 1; i>= 0; i--) {
//             if(str[i] == ' ') {
//                 str[index - 1] = '0';
//                 str[index - 2] = '2';
//                 str[index - 3] = '%';
//                 index -= 3;
//             } else {
//                 str[index - 1] = str[i];
//                 index--;
//             }
//         }
//         return new String(str);
//     }
//     public static void main(String[] args) {
//         String str = "Mr John Smith    ";
//         int len = 13;
//         char[] charArray = str.toCharArray();

//         String res = replace(charArray, len);
//         System.out.println(res);
//     }
// }


public class URLify {

    private static String replaceSpaces(char[] chars, int len) {
        int spaces = 0, index;
        for(int i = 0;i < len; i++) {
            if(chars[i] == ' ')
                spaces++;
        }

        index = len + spaces * 2;

        for(int i = len - 1; i >= 0; i--) {
            if(chars[i] == ' ') {
                chars[index - 1] = '0';
                chars[index - 2] = '2';
                chars[index - 3] = '%';
                index = index - 3;
            } else {
                chars[index - 1] = chars[i];
                index = index - 1;
            }
        }
        return new String(chars);
    }
    public static void main(String[] args) {
        String str = "Mr John Smith    ";
        int len = 13;

        char[] chars = str.toCharArray();
        String res = replaceSpaces(chars, len);
        System.out.println(res);

    }
}