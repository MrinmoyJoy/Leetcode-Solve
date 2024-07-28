class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)return x;
        int l=1, r=x, mid;
        while(l<=r){
            mid = l + (r - l) / 2;
            if((long)mid*mid==(long)x)return floor(mid);
            else if((long)mid*mid>(long)x)r=mid-1;
            else l=mid+1;
        }
        
        return floor(r);
    }
};
