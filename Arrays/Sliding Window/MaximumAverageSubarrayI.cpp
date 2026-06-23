// T.C. = O(N)
// S.C. = O(1)
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int sum = 0;
        double maxSum = INT_MIN;
        int n = nums.size();
        for(int j = 0;j<n;j++){
            sum += nums[j];
            if(j-i==k-1){
                maxSum = max(maxSum,sum);
                sum -= nums[i];
                i++;
            }
        }
        return maxSum/k;
    }
};