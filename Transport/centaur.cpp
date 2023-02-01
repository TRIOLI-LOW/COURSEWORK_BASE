
#include "centaur.h"

double Centaur::calcTime() {
    speed = 15;
    return (static_cast<double>(distance) / (speed)) + chill(before_chill);
}


double Centaur::chill(int before_chill_) {


    last = 2;

    num = (distance / speed) / before_chill;
    if ((distance / speed) % before_chill == 0) {
        --num;
    }
        return num  * last;
    
}