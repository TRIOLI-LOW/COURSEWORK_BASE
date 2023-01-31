#pragma once
#include"Transport.h"
#include "Boots.h"
#include "Camel.h"
#include "Camel_faster.h"
#include "Centaur.h"
#include "Broom.h"
#include "Carpet.h"
#include "Eagle.h"

TRANSPORT_API enum class TransportType {
	boots = 1,
	camel,
	camel_faster,
	centaur, 

	broom,
	carpet,
	eagle


};


TRANSPORT_API Transport* MakeTransport(TransportType type);
