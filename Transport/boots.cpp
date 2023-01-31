
#include "boots.h"


double Boots::calcTime() {
    speed = 6;
    return distance / speed + chill(before_chill);
    
}


double Boots::chill(int before_chill_) {
    
    
    one = 10;
    last = 5;

    num = (distance / speed) / before_chill;

    if (num == 1) {
        return one;
    }
    else {
        return  one + ((num - 1) * last);
    }
}