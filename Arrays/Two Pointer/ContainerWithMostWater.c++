class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water_stored = 0;
        int i = 0;
        int j = height.size()-1;
        while(i<j){
            int minimum_height = min(height[i],height[j]);
            int distance = j-i;
            int curr_water_stored = minimum_height*distance;
            max_water_stored = max(max_water_stored,curr_water_stored);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return max_water_stored;
    }
};