
#include "camel_faster.h"

double Camel_faster::calcTime() {
    speed = 40;
    return (static_cast<double>(distance) / (speed)) + (chill(before_chill));
}


double Camel_faster::chill(int before_chill_) {
   

    one = 5;
    second = 6.5;
    last = 8;

    num = (distance / speed) / before_chill;
    if ((distance / speed) % before_chill == 0) {
        --num;
    }
    if (num == 1) {
        return one;
    }
    else if (num == 2) {
        return one + second;
    }
    else {
        return (((num - 2) * last) + (one + second)) ;
    }
}