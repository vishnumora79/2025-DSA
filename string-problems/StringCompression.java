public class StringCompression {
    private static String compress(String str) {
        StringBuilder sb = new StringBuilder();
        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            count++;
            if (i + 1 >= str.length() || str.charAt(i) != str.charAt(i + 1)) {
                sb.append(str.charAt(i));
                sb.append(count);
                count = 0;
            }
        }
        return sb.length() < str.length() ? sb.toString() : str;
    }

    public static void main(String[] args) {
        String str = "aabcccccaaa";
        String res = compress(str);
        System.out.println(res);
    }
}
