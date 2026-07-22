class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> freq;
        int m = s.size();
        int n = t.size();
        for(int i = 0;i<n;i++){
            freq[t[i]]++;
        }
        int i = 0;
        int j = 0;
        int count = 0;
        int minWindow = INT_MAX;
        int startIndex = -1;
        while(j<m){
            if(freq[s[j]]>0){
                count++;             
            }
            freq[s[j]]--;
            while(count == n){  
                if(j-i+1<minWindow){
                    minWindow = j-i+1;
                    startIndex = i;
                }
                freq[s[i]]++;
                if(freq[s[i]]>0){
                    count--;
                }
                i++;
            }
            j++;
        }
        return startIndex == -1?"":s.substr(startIndex,minWindow) ;
    }
};