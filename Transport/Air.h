#pragma once
#include "Transport.h"
class TRANSPORT_API Air : public Transport {
protected:

	 virtual double kef(int distance_) = 0;
};