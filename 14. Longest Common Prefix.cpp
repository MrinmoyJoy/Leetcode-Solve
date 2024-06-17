class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre="";
        std::sort(strs.begin(), strs.end());
        
        int listlen=strs.size();
        int maxlen=strs[0].size();
        //cout<<listlen<<"  "<<maxlen<<endl;
        string fir=strs[0];
        int flag=0;
        int count=0;
        for(int i=0;i<maxlen;i++){
            char c=fir[i];
            count=0;
            for(int j=0;j<listlen;j++){
                if(c==strs[j][i]){
                    count++;
                }
            }
            if(count==listlen){
                pre=pre+c;
            }
            else{
                flag=1;
                break;
            }
        }
        cout<<pre<<endl;

        

        return pre;
    }
};
