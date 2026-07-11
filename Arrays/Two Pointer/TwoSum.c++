class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int i= 0;i<nums.size();i++){
            int num = target - nums[i];
            if(freq.find(num) != freq.end()){
                ans =  {i,freq[num]};
                return ans;
            }
            freq[nums[i]] = i;
        }
        return {};
    }
};