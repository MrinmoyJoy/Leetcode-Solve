class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len=nums.size();
        int l[len], r[len];
        int index=-1;
        int sum=0;
        for(int i=0;i<len;i++){
            l[i]=sum;
            sum+=nums[i];
        }
        sum=0;
        for(int i=len-1;i>=0;i--){
            r[i]=sum;
            sum+=nums[i];
        }

        for(int i=0;i<len;i++){
            if(l[i]==r[i]){
                index=i;
                break;
            }
        }
        return index;

    }
};
