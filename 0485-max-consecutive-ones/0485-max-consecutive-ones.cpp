class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        //brute force approch 
       /* int maxlen=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=i;j<n;j++){

                if(nums[j]==1){
                    count++;
                }
                else{
                    break;
                }
                maxlen=max(maxlen,count);
            }
        }return maxlen;*/

        int cnt=0;
        int maxcnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                cnt=0;
            }
            maxcnt=max(maxcnt,cnt);
        }
        return maxcnt;
    } 

};