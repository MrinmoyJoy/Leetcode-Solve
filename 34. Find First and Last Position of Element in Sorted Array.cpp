class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int ans=-1;
        int l=0, r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                ans=mid;
                r=mid-1;

            }
            else if(target>nums[mid])l=mid+1;
            else r=mid-1;

        }
        v.push_back(ans);
        l=0, r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;

            }
            else if(target>nums[mid])l=mid+1;
            else r=mid-1;

        }
        v.push_back(ans);

        return v;
    }
};
