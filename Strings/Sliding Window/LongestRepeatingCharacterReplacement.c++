class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int j = 0;
        int maxLength = 0;
        int maxFreq = 0;
        vector<int> freq(26,0);
        while(j<s.size()){
            freq[s[j]-'A']++;
            maxFreq = max(maxFreq,freq[s[j]-'A']);
            while((j-i+1)-maxFreq>k){
                freq[s[i]-'A']--;
                maxFreq = 0;
                for(int k = 0;k<26;k++){
                    maxFreq = max(maxFreq,freq[k]);
                }
                i++;
            }
            if((j-i+1)-maxFreq<=k){
                maxLength = max(maxLength,(j-i+1));
            }
            j++;
        }
        return maxLength;
    }
};