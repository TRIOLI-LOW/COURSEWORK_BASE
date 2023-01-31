
#include "Broom.h"

double Broom::calcTime() {
	speed = 20;
	return (distance * kef(distance)) / speed;
}

double Broom::kef(int distance_) {
	if (distance_ < 1000) {
		return 1;
	}
	else return (1 - ((distance_ / 1000) / 100));

}