class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> vect1;
        int c1=0,c2=0;
        while(c1<m && c2<n){
            if(nums1[c1]<nums2[c2]){
                vect1.push_back(nums1[c1]);
                c1++;
            }
            else{
                vect1.push_back(nums2[c2]);
                c2++;
            }
        }

        while (c1 < m)
            vect1.push_back(nums1[c1++]);
        while (c2 < n)
            vect1.push_back(nums2[c2++]);

        for(int i=0;i<m+n;i++){
            nums1[i]=vect1[i];
        }
    }
};
