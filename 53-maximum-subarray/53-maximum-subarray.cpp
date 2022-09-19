class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum>maxsum){
                maxsum=sum;
            }
            if(sum<0){
                sum=0;
            }            
        }
        return maxsum;
    }
};