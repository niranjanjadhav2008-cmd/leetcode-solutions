class Solution {
public:
    int totalFruit(vector<int>& fruits) {
     int n = fruits.size();
     int l = 0;
     int r = 0;
     int maxLength = INT_MIN;
     unordered_map<int,int> m;
     for(int r = 0;r<n;r++){
        m[fruits[r]]++;
        while(m.size()>2){
            m[fruits[l]]--;
            if(m[fruits[l]] == 0) {
                m.erase(fruits[l]);
            }
            l++;
        }
        maxLength = max(maxLength,r-l+1);
    }  
    return maxLength; 
    }
};