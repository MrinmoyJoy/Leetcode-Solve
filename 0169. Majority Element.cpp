class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,most=0;
        int len=nums.size();    
        for (int i=0;i<len;i++) {
            if (cnt==0){
                most=nums[i];
                cnt=1;
            } 
            else if (most==nums[i]) cnt++;
            else cnt--;
        }
        return most; 
    }
};
