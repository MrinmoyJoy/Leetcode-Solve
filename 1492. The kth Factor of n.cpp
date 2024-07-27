class Solution {
public:
    int kthFactor(int n, int k) {
        
        vector<int> v;
        int itr=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(i*i==n){
                    v.insert(v.begin()+itr,i);
                }
                else{
                    v.insert(v.begin()+itr,i);
                    v.insert(v.begin()+itr+1,(n/i));
                }
                itr++;
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        if(k>v.size())return -1;
        else return v[k-1];

    }
};
