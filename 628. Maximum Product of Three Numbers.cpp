class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n=nums.size();
        int mx=INT_MIN;
        if(n<=5){
            for(int i=0;i<n-2;i++){
                for(int j=i+1;j<n-1;j++){
                    for(int k=j+1;k<n;k++){
                        mx=max(mx, (nums[i]*nums[j]*nums[k]) );
                    }
                }
            }

            return mx;
        }
        else{
            vector<int> v;
            sort(nums.begin(), nums.end());
            v.push_back(nums[0]);
            v.push_back(nums[1]);
            v.push_back(nums[n-3]);
            v.push_back(nums[n-2]);
            v.push_back(nums[n-1]);

            n=5;

            for(int i=0;i<n-2;i++){
                for(int j=i+1;j<n-1;j++){
                    for(int k=j+1;k<n;k++){
                        mx=max(mx, (v[i]*v[j]*v[k]) );
                    }
                }
            }
            return mx;
        }
        
        
    }
};
