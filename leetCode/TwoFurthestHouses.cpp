class Solution {
    public int maxDistance(int[] colors) {
        
        int n = colors.length;
        int longest = 0;

        for (int i = 0; i < n; i++) {
            int left = i; 
            int right = n - 1;
            while (left < right) {
                if (colors[left] != colors[right]) {
                    longest = Math.max(longest, Math.abs(left - right));
                }
                right--;
            }
        }
        return longest;
    }
}
