class Solution {
public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.size()-1;
        while(i<=j)
            if(s[i++] != s[j--]) return false;
        return true;
    }
    bool validPalindrome(string s) {
        if(isPalindrome(s))return true;
        long int len=s.size();
        int i=0,j=len-1;
        while(i<j){
            if(s[i] != s[j]){
            string temp=s;
            temp.erase(i, 1);
            string temp2=s;
            temp2.erase(j, 1);
            if(isPalindrome(temp))return true;            
            else if(isPalindrome(temp2))return true;
            else return false;
            }

            i++;j--;
        }
        return false;
        
    }
};
