class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int len=nums.size();double mx1=INT_MIN;
        vector<int> v;
        double pro=1;
        for(int i=0;i<len;i++){
            pro=pro*nums[i];
            mx1=max(mx1,pro);
            if(pro==0)pro=1;
        }
        pro=1;
        for(int i=len-1;i>=0;i--){
            pro=pro*nums[i];
            mx1=max(mx1,pro);
            if(pro==0)pro=1;
        }

        return (int)mx1;
        
    }
};
