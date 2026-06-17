class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = INT_MIN;
        int i = 0;
        double sum = 0;
        int n = nums.size();
        for(int j = 0;j<n;j++){
            sum += nums[j];
            if(j-i==k-1){
                double avg = sum/k;
                if(avg>maxAvg){
                    maxAvg = avg;
                }
                sum -= nums[i];
                i++;
            }
        }
        return maxAvg;
    }
};