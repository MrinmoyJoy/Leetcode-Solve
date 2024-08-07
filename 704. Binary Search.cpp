class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ind=-1;
        int l=0, r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target) return mid;
            else if(target>nums[mid])l=mid+1;
            else r=mid-1;

        }
        return ind;

        
    }
};
