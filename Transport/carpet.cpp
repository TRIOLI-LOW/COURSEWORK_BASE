
#include "carpet.h"

double Carpet::calcTime() {
	speed = 10;
	return (distance * kef(distance)) / speed;
}

double Carpet::kef(int distance_) {

	if (distance_ < 1000) {
		return 1;
	}
	else if (distance_ < 5000) {
		return 0.93;
	}
	else if (distance_ < 10000) {
		return 0.9;
	}
	else return 0.95;

}