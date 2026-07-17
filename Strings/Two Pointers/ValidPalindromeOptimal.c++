class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int end = n-1;
        while(st<end){
            if(s[st] == s[end]){
                st++;
                end--;
            }else{
                return isPalindrome(s,st+1,end) || isPalindrome(s,st,end-1);
            }
        }
        return true;
    }
    bool isPalindrome(string n,int left,int right){
        while(left<right){
            if(n[left] == n[right]){
                left++;
                right--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};