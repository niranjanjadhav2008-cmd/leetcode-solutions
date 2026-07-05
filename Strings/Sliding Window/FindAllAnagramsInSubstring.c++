class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size()>s.size()){
            return ans;
        }
        vector<int> s_freq(26,0);
        vector<int> p_freq(26,0);
        for(char c : p){
            p_freq[c-'a']++;
        }
        int i = 0;
        int j = 0;
        while(j<s.size()){
            s_freq[s[j]-'a']++;
            while(j-i+1>p.size()){
                s_freq[s[i]-'a']--;
                i++;
            }
            if(j-i+1 == p.size()){
                if(s_freq == p_freq){
                    ans.push_back(i);
                }
            }
            j++;
        }
        return ans;
    }
};