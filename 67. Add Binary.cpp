class Solution {
public:
    string addBinary(string a, string b) {
        int lena=a.size();
        int lenb=b.size();
        if(lena>lenb)b.insert(0, (lena-lenb), '0');
        else a.insert(0, (lenb-lena), '0');
        int len=a.size();
        string result="";
        int carry=0;
        for(int i=len-1;i>=0;i--){
            if( (a[i]=='0'&&b[i]=='1') || (a[i]=='1'&&b[i]=='0') ){
                if(carry==0){
                    result='1'+result;
                }
                else{
                    result='0'+result;
                }
                
            }
            else if(a[i]=='0'&&b[i]=='0'){
                if(carry==0){
                    result='0'+result;
                    carry=0;
                }
                else{
                    result='1'+result;
                    carry=0;
                }
            }
            else if(a[i]=='1'&&b[i]=='1'){
                if(carry==0){
                    result='0'+result;
                    carry=1;
                }
                else{
                    result='1'+result;
                    carry=1;
                }
                
            }

        }
        if(carry==1)
            result='1'+result;

        return result;
        
    }
};
