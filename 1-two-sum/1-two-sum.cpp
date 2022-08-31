class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> prevMap;
        for(int i=0;i<nums.size();i++){
            if(prevMap.find(target-nums[i])!=prevMap.end()){
                ans.push_back(i);
                ans.push_back(prevMap[target-nums[i]]);
                return ans;
            }
            prevMap[nums[i]] = i;
            
        }
        return ans;
        

    }
};