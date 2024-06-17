class Solution {
public:
    int romanToInt(string s) {

        map<char, int> m={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int number=0;
        //auto it=m.find(s[0]);
        //int number=(*it).second;

        for(int i=0;i<s.size();i++){
            auto fit=m.find(s[i]);
            auto sit=m.find(s[i+1]);
            if((*fit).second<(*sit).second){
                number+=((*sit).second-(*fit).second);
                i++;
            }
            else{
                number+=(*fit).second;
            }
        }
        
        return number;
        
    }
};
