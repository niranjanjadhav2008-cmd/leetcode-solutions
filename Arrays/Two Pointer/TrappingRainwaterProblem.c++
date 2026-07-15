class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefixMax = height;
        vector<int> suffixMax = height;
        for(int i = 1 ;i<n;i++){
            prefixMax[i] = max(prefixMax[i-1],height[i]);
        }
        for(int j = n-2;j>=0;j--){
            suffixMax[j] = max(suffixMax[j+1],height[j]);
        }
        int total = 0;
        for(int k = 0;k<n;k++){
            int leftMax = prefixMax[k];
            int rightMax = suffixMax[k];
            if(height[k]<leftMax && height[k]<rightMax){
                total += min(leftMax,rightMax) - height[k];
            }
        }
        return total;
    }
};