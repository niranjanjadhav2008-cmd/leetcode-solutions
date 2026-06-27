class Solution {
public:
    int maxVowels(string s, int k) {
        if(s.size()<k){
            return 0;
        }
        int i = 0;
        int j = 0;
        int vowelCount = 0;
        int maxVowelCount = 0;
    while(j<s.size()){
        if(j-i+1>k){
            if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]== 'u'){
                vowelCount--;
            }
            i++;
        }
        if(s[j]=='a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j]== 'u'){
            vowelCount++;
            maxVowelCount = max(maxVowelCount,vowelCount);
        }
        j++;
        
    }
    return maxVowelCount;
    }
};