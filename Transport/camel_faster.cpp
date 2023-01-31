
#include "camel_faster.h"

double Camel_faster::calcTime() {
    speed = 40;
    return distance / speed + chill(before_chill);
}


double Camel_faster::chill(int before_chill_) {
   

    one = 5;
    second = 6.5;
    last = 8;

    num = (distance / speed) / before_chill;

    if (num == 1) {
        return one;
    }
    else if (num == 2) {
        return one + second;
    }
    else {
        return ((one + second) + ((num - 2) * last));
    }
}