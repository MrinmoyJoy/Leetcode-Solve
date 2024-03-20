class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len=nums.size();
        for(int i=0;i<len;i++)
            nums[i]=nums[i]*nums[i];
        int l=0, r=len-1, ndex=r;
        vector<int> ans(ndex+1);
        while(l<=r){
            if(nums[l]>nums[r]){
                ans[ndex]=nums[l];
                l++;
            }
            else{
                ans[ndex]=nums[r];
                r--;
            }
            ndex--;
        }

        return ans;
        
    }
};

