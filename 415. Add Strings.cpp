class Solution {
public:
    string addStrings(string num1, string num2) {
        long long int n1=0, n2=0;
        int l1=num1.size()-1;
        int l2=num2.size()-1;
        int carry=0;
        int sum=0;
        string final="";

        while(l1>=0 || l2>=0|| carry){
            if(l1>=0){
                sum+=(num1[l1]-'0');
                l1--;
            }
            if(l2>=0){
                sum+=(num2[l2]-'0');
                l2--;
            }
            sum+=carry;
            carry = sum / 10;

            sum=sum%10;
            
            final=to_string(sum) + final;

            sum=0;

        }
        if (final=="") {
            final='0';
        }
        return final;

}

        
    
        

};
