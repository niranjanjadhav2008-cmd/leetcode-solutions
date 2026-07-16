class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        if(n==0){
            return true;
        }
        int st = 0;
        int end = n-1;
        while(st<end){
            while(st<end && !isalnum(s[st])){
                st++;
            }
            while(st<end && !isalnum(s[end])){
                end--;
            }
            char ch1 = tolower(s[st]);
            char ch2 = tolower(s[end]);
            if(ch1!=ch2){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};