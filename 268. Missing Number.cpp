class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n=nums.size();
        int x=0,t=0;
        for(int i=0;i<=n;i++)x+=i;
        for(int i=0;i<n;i++)t+=nums[i];
        return x-t;
        
    }
};
