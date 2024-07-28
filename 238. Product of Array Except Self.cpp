class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        int arr1[len]; int arr2[len];
        
        arr1[0]=1;arr2[len-1]=1;
        for(int i=1;i<len;i++){
            arr1[i]=arr1[i-1]*nums[i-1];
        }
        for(int i=len-2;i>=0;i--){
            arr2[i]=arr2[i+1]*nums[i+1];
        }
        for(int i=0;i<len;i++)
            nums[i]=arr1[i]*arr2[i];

        return nums;
        
    }
};
