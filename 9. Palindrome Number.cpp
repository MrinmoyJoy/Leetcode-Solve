class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(x<10)return true;
        string num="";
        string rev="";
        while(x!=0){
            char c = '0' + (x%10);
            num=num+c;
            rev=c+rev;
            x=x/10;
        }
        cout<<num<<" "<<rev<<endl;
        if(num==rev)
            return true;
        else
            return false;
        
    }
};
