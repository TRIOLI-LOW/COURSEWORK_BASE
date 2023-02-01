#pragma once
#include "Transport.h"
class TRANSPORT_API Ground : public Transport {
protected:
	
	int num = 0;
	int one = 0;
	double second = 0.0;
	int last = 0;
	 virtual double chill(int before_chill_) = 0;



};