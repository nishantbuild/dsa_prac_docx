class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low=1;
        int high = *max_element(candies.begin(), candies.end());
        int ans=0;

        while(low<=high){
            int mid=(low+high)/2;
            long long childrenAllocated = 0;

            for(int pile: candies){
            childrenAllocated += pile/mid;
            }
            
            if (childrenAllocated >= k) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};