class Solution {
public:
    int strStr(string haystack, string needle) {
        int haylen=haystack.size();
        int nedlen=needle.size();
        for(int i=0;i<haylen-nedlen+1;i++){
            int step=0;
            for(int j=0;j<nedlen;j++){
                if(needle[j]==haystack[i+step]){
                    step++;
                }
                else{
                    break;
                }
            }
            if(step==nedlen)
                return i;
        }
        return -1;
    }
};
