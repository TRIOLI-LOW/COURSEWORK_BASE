#pragma once
#include "Ground.h"
class TRANSPORT_API Camel_faster : public Ground {
public:
	 double calcTime() override;
	 double chill(int before_chill) override;
	 const char* Name() { return "�������-���������"; };
	
	int before_chill = 10;

};