class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int len=prices.size();
        int pro=0;
        int min=prices[0];

        for(int i=1;i<len;i++){
            if(prices[i]>min){
                if(prices[i]-min>pro){
                    pro=prices[i]-min;
                }
            }
            else{
                min=prices[i];
            }
        }
        
        return pro;
    }
};
