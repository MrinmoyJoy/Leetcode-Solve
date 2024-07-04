class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        if(p1==p2 && p2==p3 && p3==p4) return false;
        vector<double> v;
        double d=abs(sqrt( (p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]) ));
        v.push_back(d);
        d=abs(sqrt( (p1[0]-p3[0])*(p1[0]-p3[0]) + (p1[1]-p3[1])*(p1[1]-p3[1]) ));
        v.push_back(d);
        d=abs(sqrt( (p1[0]-p4[0])*(p1[0]-p4[0]) + (p1[1]-p4[1])*(p1[1]-p4[1]) ));
        v.push_back(d);
        d=abs(sqrt( (p3[0]-p2[0])*(p3[0]-p2[0]) + (p3[1]-p2[1])*(p3[1]-p2[1]) ));
        v.push_back(d);
        d=abs(sqrt( (p4[0]-p2[0])*(p4[0]-p2[0]) + (p4[1]-p2[1])*(p4[1]-p2[1]) ));
        v.push_back(d);
        d=abs(sqrt( (p3[0]-p4[0])*(p3[0]-p4[0]) + (p3[1]-p4[1])*(p3[1]-p4[1]) ));
        v.push_back(d);
        //for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
        sort(v.begin(), v.end());
        
        if(v[4]==v[5] && v[0]==v[1] && v[1]==v[2] && v[2]==v[3] && v[3]==v[0] )return true;
        else return false;





        
    }
};
