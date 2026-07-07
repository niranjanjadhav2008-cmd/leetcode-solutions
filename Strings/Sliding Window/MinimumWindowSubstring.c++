class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128,0);
        for(char ch : t)
            freq[ch]++;
        int i = 0;
        int j = 0;
        int count = 0;
        int minWindow = INT_MAX;
        int stIndex = -1;
        while(j < s.size())
        {
            if(freq[s[j]] > 0)
                count++;
            freq[s[j]]--;
            while(count == t.size())
            {
                if(j-i+1 < minWindow)
                {
                    minWindow = j-i+1;
                    stIndex = i;
                }
                freq[s[i]]++;
                if(freq[s[i]] > 0)
                    count--;
                i++;
            }
            j++;
        }
        return stIndex == -1 ? "" : s.substr(stIndex,minWindow);
    }
};