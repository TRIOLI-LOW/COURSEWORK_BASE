#pragma once
#include "Ground.h"
class TRANSPORT_API Centaur : public Ground {

public:
	 double calcTime() override;
	 double chill(int before_chill) override;
	 const char* Name() { return "Кентавр"; };

	int before_chill = 8;

};