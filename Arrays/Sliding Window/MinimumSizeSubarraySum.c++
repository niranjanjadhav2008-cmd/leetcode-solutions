class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        int minlength = INT_MAX;
        int i = 0,j=0;
        int sum = 0;
        while(i<n){
            if(sum<target && j<n){
                sum += nums[j];Ma
                j++;
            }
            else if(sum >= target){
                int length = j-i;
                if(length<minlength){
                    minlength = length;
                }
                sum -= nums[i];
                i++;
            }
            else{
                sum -= nums[i];
                i++;
            }
        }
        if(minlength == INT_MAX){
            return 0;
        }else{
            return minlength;
        }
    }
};