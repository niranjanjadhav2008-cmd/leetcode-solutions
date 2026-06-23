// T.C. = O(N)
// S.C. = O(1)
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int sum = 0;
        int minLength = INT_MAX;
        for(int r = 0;r<nums.size();r++){
            sum += nums[r];
            while(sum>=target){
                minLength = min(minLength,r-l+1);
                sum -= nums[l];
                l++;
            }
        }
        if(minLength != INT_MAX){
            return minLength;
        }else{
            return 0;
        }
    }
};