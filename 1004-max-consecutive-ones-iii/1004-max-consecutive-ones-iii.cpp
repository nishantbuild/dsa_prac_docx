class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
        /*int maxlen=0;

        for(int i=0;i<n;i++){
            int zeros=0;
            for(int j=i;j<n;j++){
                if (nums[j]==0) zeros++;
                
                if(zeros<=k) maxlen=max(maxlen,j-i+1);
                else{
                    break;
                }
            }

        }
        return maxlen;*/

        int left=0;
        int maxlen=0;
        int zeros=0;

        for(int right=0;right<n;right++){

            if(nums[right]==0){
                zeros++;
            }
            
            while(zeros>k){
                if(nums[left]==0){
                    zeros--;
                }
                left++;

            }
            maxlen=max(maxlen,right-left+1);
            
        }return maxlen;
    }
};