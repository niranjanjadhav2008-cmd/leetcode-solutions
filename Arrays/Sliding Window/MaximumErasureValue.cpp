class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
       int n = nums.size();
       unordered_set<int> s;
       int i = 0;
       int j = 0;
       int sum = 0;
       int maxSum = INT_MIN;
       while(i<n){
        if((j<n) && (s.find(nums[j])==s.end())){
            s.insert(nums[j]);
            sum += nums[j];
            if(sum>maxSum){
               maxSum = sum;
            }
            j++;
            
        }else if((j<n) &&  (s.find(nums[j])!=s.end())){
            s.erase(nums[i]);
            sum -= nums[i];
            i++;
        }else{
            sum -= nums[i];
            i++;
        }
       } 
       return maxSum;
    }
};