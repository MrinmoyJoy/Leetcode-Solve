class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int> m;
        int f=0;
        int len=tasks.size();
        for(auto i=0;i<len;i++){
            char c=tasks[i];
            m[c]++;

            if(m[c]>f)f=m[c];
        }
        int tl=0;
        int lno=0;
        for(auto &i:m){
            if(i.second==f)lno++;
        }
        tl=( (f-1)*(n+1) ) + lno;

        tl=max( len,tl );
        //cout<<f<<" "<<lno<<endl;


        // for(auto &i:m){
        //     cout<<i.first <<" "<<i.second <<endl;
        // }

        return tl;
    }
};
