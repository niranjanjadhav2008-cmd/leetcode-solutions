class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int end = n-1;
        bool isPalindrome = true;
        while(st<end){
            if(s[st]!=s[end]){
                isPalindrome = false;
                break;
            }
            st++;
            end--;
        }
        if(isPalindrome){
            return true;
        }
        else{
            for(int i = 0;i<s.size();i++){
                string new_string = s;
                new_string.erase(i,1);
                int start = 0;
                int end_last = new_string.size()-1;
                while(start<end_last){
                    if(new_string[start] != new_string[end_last]){
                        break;
                    }
                    start++;
                    end_last--;
                }
                if(start>=end_last){
                    return true;
                }
            }
        }
        return false;
    }
};