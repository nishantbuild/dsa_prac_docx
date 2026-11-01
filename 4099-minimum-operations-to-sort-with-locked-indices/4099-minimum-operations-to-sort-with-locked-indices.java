class Solution {
    public int minOperations(int[] nums, int[] locked, int k) {
        boolean track[] = new boolean[nums.length];
        for (int i = 0; i < nums.length; i++) {
            int t = nums[i] - 1;
            if (i != t) {
                int l = Math.min(i, t);
                int r = Math.max(i, t);
                for (int p = l; p <= r; p++) {
                    track[p] = true;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (locked[i] == 1 && track[i]) {
                count++;
            }
        }
        if (count > k)
            return -1;
        int c = 0;
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[j] < nums[i]) {
                    c++;
                }
            }
        }
        return c + count;
    }
}