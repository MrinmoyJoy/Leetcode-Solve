class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int len=gas.size();
        int calc=0,temp=0;
        int failed=0;

        for(int i=0;i<len;i++){
            calc+= (gas[i]-cost[i]);
            temp+= (gas[i]-cost[i]);
            if(temp<0){
                temp=0;
                failed=i+1;
            }

        }
        if(calc<0)return -1;
        else return failed;



        // for(int i=0;i<len;i++){
        //     int calc=gas[i]-cost[i];
        //     if(calc>=0){
        //         int round=0, j=i+1;
        //         if(j>=len)j=0;
        //         while(round<len-1){
        //             calc+=(gas[j]-cost[j]);
        //             if(calc<0)break;
        //             j++;
        //             if(j>=len)j=0;
        //             round++;
        //             cout<<"it calc "<<calc<<endl;
        //         }
        //     }
        //     cout<<"calc "<<calc<<endl;
        //     if(calc>=0)return i;
        // }

    }
};
