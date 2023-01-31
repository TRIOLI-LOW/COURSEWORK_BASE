#pragma once
#include "Air.h"
class TRANSPORT_API Broom : public Air {
public:
	
	 double kef(int distance_) override;
	 double calcTime() override;
	 const char* Name() { return "Метла"; };
};