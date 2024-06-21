class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
        return true;
        if(n<=0)
        return false;

        while(n>2){
            cout<<n<<endl;
            if(n%2==0)
                n=n/2;
            else
                return false;
        }
        cout<<"br"<<endl;
        if(n%2==0)
            return true;
        else
            return false;
        
    }
};
