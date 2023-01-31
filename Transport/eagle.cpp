
#include "Eagle.h"

double Eagle::calcTime() {
     speed = 8;
	return (distance * kef(distance)) / speed;
}

double Eagle::kef(int distance_) {
	
	return 0.94;

}