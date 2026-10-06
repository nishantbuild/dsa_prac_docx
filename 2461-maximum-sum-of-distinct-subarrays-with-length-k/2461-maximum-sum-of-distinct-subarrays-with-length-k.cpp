

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        long long sum = 0;
        long long ans = 0;

        int left = 0;

        for (int right = 0; right < nums.size(); right++) {

            sum += nums[right];
            freq[nums[right]]++;

            while (freq[nums[right]] > 1) {
                sum -= nums[left];
                freq[nums[left]]--;
                left++;
            }

            if (right - left + 1 == k) {

                ans = max(ans, sum);

                sum -= nums[left];
                freq[nums[left]]--;
                left++;
            }
        }

        return ans;
    }
};