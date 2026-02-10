class Solution {
    public int totalSteps(int[] nums) {
        int n = nums.length;
        int[] steps = new int[n];
        Stack<Integer> st = new Stack<>();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            while (!st.isEmpty() && nums[st.peek()] <= nums[i]) {
                steps[i] = Math.max(steps[i], steps[st.pop()]);
            }
            if (!st.isEmpty())
                steps[i]++;
            ans = Math.max(ans, steps[i]);
            st.push(i);
        }
        return ans;
    }
}