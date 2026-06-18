class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        // permiutes = 360/60 = 6degree 
        int angmin = 6*minutes;

        //  perhoure angle => 360/12 = 30 degree
        // for hour and per minute angle => 30/60 = 0.5

        double anglhor = (hour%12)*30.0 + minutes*0.5;

        double angle =  abs(anglhor-angmin);

        return min(angle, 360.0-angle);
    }
};