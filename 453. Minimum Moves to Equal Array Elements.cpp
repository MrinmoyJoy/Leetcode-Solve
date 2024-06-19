class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mi=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mi)mi=nums[i];
        }
        int x=0;
        for(int i=0;i<nums.size();i++){
            x+=abs(nums[i]-mi);
        }
        return x;
        
    }
};
