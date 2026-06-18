class Solution {
public:
    double angleClock(int hour, int minutes) {
        double first=abs((minutes*0.5)-(minutes*6))+(12-hour)*30;
        if(first>360){
            first=abs(360-first);
        }
        double second=abs(360-first);

      return min(first,second);
      

    }
};