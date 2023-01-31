#pragma once
#include "Air.h"
class TRANSPORT_API Eagle : public Air {
public:
	
	 double kef(int distance_) override;
	 double calcTime() override;
	 const char* Name() { return "Îð¸ë"; };
};