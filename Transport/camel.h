#pragma once
#include "Ground.h"
class TRANSPORT_API Camel : public Ground {

public:
	 double calcTime() override;
	 double chill(int before_chill) override;
	 const char* Name() { return "Верблюд"; };

	int before_chill = 30;
	
};