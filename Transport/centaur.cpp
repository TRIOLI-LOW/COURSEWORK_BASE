
#include "centaur.h"

double Centaur::calcTime() {
    speed = 15;
    return (distance / speed) + chill(before_chill);
}


double Centaur::chill(int before_chill_) {


    last = 2;

    num = (distance / speed) / before_chill;

        return num  * last;
    
}