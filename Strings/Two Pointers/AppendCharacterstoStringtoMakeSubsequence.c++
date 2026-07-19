class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n==0){
            return m;
        }
        int j = 0;
        int i=0;
        while(j<n && i<m){
            if(s[j] == t[i]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return m - i;
    }
};