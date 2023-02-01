
#include "Broom.h"

double Broom::calcTime() {
	speed = 20;
	return (distance * (kef(distance))) / speed;
}

double Broom::kef(int distance_) {
	if (distance_ < 1000) {
		return 1;
	}

	else {
		double temp = 0.0;
		for (int i = 0; i < distance_; i += 1000) {
		
			if ((distance_ - i) > 1000) {
				++temp;
			}

		}
		return (1 - (temp / 100));
	}
}