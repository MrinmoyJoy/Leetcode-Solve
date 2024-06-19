class Solution {
public:

    int calc(int x){
        int result=0;
        while(x){
            int g=(x%10);
            result+=(g*g);
            x=x/10;
        }
        return result;
    }
    bool isHappy(int n) {
        vector<int> arr{};
        arr.push_back(n);

        while(n!=1){
            cout<<n<<endl;
            n=calc(n);
            if ( std::find(arr.begin(), arr.end(), n) != arr.end() )
                return false;
            arr.push_back(n);
        }
        return true;

        
    }
};
