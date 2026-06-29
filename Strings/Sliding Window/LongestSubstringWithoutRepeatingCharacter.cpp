class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> s1;
        int i = 0;
        int maxLength = 0;
        int j = 0;
        while(j<s.size()){
            if(s1.find(s[j])!=s1.end()){
                s1.erase(s[i]);
                i++;
            }
            if(s1.find(s[j]) == s1.end()){
                s1.insert(s[j]);
                maxLength = max(maxLength,j-i+1);
                j++;
            }
        }
        return maxLength;
    }
};