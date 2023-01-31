#pragma once
#include "Ground.h"
class TRANSPORT_API Boots : public Ground {

public:
	 double calcTime() override;
	 double chill(int before_chill) override;
	 const char* Name() { return "Сапоги-вездеходы"; };

	int before_chill = 60;

};