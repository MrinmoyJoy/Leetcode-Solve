class Solution {
public:
    int calculate(string s) {
        int sum=0,sign=1;
        stack<pair<int,int>> stk;
        int len=s.size();
        for(int i=0;i<len;i++){
            if(isdigit(s[i])){
                int num = 0;
                while(i<len && isdigit(s[i])){
                    num = num*10 + (s[i]-'0');
                    i++;
                }
                i--;
                sum+=(num*sign);
                sign=1;
            }
            else if(s[i]=='-')
                sign=-1;
            else if(s[i]=='('){
                stk.push({sum , sign});
                sum=0;sign=1;
            }
            else if(s[i]==')'){
                sum = stk.top().first + (stk.top().second * sum);
                stk.pop();
            }
        }

        return sum;
        
    }
};
