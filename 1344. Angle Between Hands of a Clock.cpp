class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hr=minutes/60.0;
        hr=hr+hour;
        hr=hr*5;
        double diff=abs(minutes-hr);
        diff=diff*6.0;
        double anti=360-diff;
        return min(diff,anti);
        
    }
};
