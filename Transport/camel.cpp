
#include "camel.h"

double Camel::calcTime() {
     speed = 10;
     
    return (static_cast<double>(distance) / (speed)) + chill(before_chill);
}


double Camel::chill(int before_chill_) {
     

     one = 5;
     last = 8;
   
     num =  (distance / speed) / before_chill;
     if ((distance / speed) % before_chill == 0) {
         --num;
  }
    if (num == 1) {
        return one;
    }
    else {
        return one + ((num - 1) * last);
    }
}