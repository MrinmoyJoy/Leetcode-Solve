class Solution {
public:
    int myAtoi(string s) {
        long long num=0;
        string str="";
        int n=s.size(); int sign=1;int leading=1;
        for(int i=0;i<n;i++){
            if(s[i]==' '&&leading==1){ 
            }
            else{
                str=str+s[i]; 
                leading=0;
            }                
        }
        if(str[0]=='-' || str[0]=='+' ){
             if(str[0]=='-') sign=0;
             else sign=1;
             str.erase(0,1);
        }
        n=str.size(); int flag=0; s="";
        for(int i=0;i<n;i++){
            if(str[i]<='9'&&str[i]>='0')
                s=s+str[i];
            else break;
        }
        if(s=="")
            s="0";

        cout<<s<<endl;
        n=s.size();
        for(int i=0;i<n;i++){
            if(num > INT_MAX)break;
            int d=int(s[i] - '0');
            num= num*10 + d;
        }
        if(sign==0) num=num*(-1);
        if(num<-2147483648) num=-2147483648;
        if(num>2147483647) num=2147483647;
        cout<<num<<endl;


        return num;
        
    }
};
