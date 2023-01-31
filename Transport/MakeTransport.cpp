
#include"MakeTransport.h"
 Transport* MakeTransport(TransportType type) {
	switch (type) {
	case TransportType::boots: return new Boots;
		break;
	case TransportType::camel: return new Camel;
		break;
	case TransportType::camel_faster: return new Camel_faster;
		break;
	case TransportType::centaur: return new Centaur;
		break;
	case TransportType::broom: return new Broom;
		break;
	case TransportType::carpet: return new Carpet;
		break;
	case TransportType::eagle: return new Eagle;
		break;
	}
}