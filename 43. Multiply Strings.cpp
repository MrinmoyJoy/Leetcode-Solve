class Solution {
public:

std::string addZeros(const std::string& inputString, int n) {
    std::string result = inputString;
    for (int i = 0; i < n; ++i) {
        result += '0';
    }
    return result;
}
    string multiply(string num1, string num2) {

        if(num1=="0"||num2=="0")return "0";
        int len1=num1.size();
        int len2=num2.size();
        int tot=len1+len2+1;
        vector<string> ch;
        int fi=0,si=0;

        for(int i=len1-1;i>=0;i--){
            for(int j=len2-1;j>=0;j--){
                int n1= num1[i]-'0';
                int n2= num2[j]-'0';
                string nstr = std::to_string(n1*n2);
                nstr = addZeros(nstr, fi+si);
                nstr.insert(0, tot-nstr.size(), '0');
                fi++;
                ch.push_back(nstr);
            }
            fi=0;
            si++;
        }
        int sum=0, carry=0;
        string result;
        for(int i = tot-1; i >= 0; i--){
            for(int j = 0; j < ch.size(); j++ ){
                char cha=ch[j][i];
                sum+=(cha-'0');

            }
            cout<<"sum "<<sum<<endl;
            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            char cha= sum+'0';
            sum=0;
            result=cha+result;
        }

        cout<<result<<endl;

        int i = 0; 
        while (result[i] == '0') 
            i++; 

        result.erase(0, i);

        return result;
}


        

};
