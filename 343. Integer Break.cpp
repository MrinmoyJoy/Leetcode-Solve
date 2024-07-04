class Solution {
public:
    int integerBreak(int n) {
        if(n==2)return 1;
        if(n==3)return 2;
        if(n==4)return 4;

        vector<int> v;
        while(n>5){
            n-=3;
            v.push_back(3);
        }
        if(n==5){
            v.push_back(3);
            v.push_back(2);
        }
        if(n==4){
            v.push_back(2);
            v.push_back(2);
        }
        if(n==3){
            v.push_back(3);
        }
        int sum=1;
        for(int i=0;i<v.size();i++)
            sum=sum*v[i];

        return sum;

        
    }
};
