#pragma once
#include <iostream>
#ifdef TRANSPORT_EXPORTS
#define TRANSPORT_API __declspec(dllexport)
#else
#define TRANSPORT_API __declspec(dllimport)
#endif
class  TRANSPORT_API Transport {
protected:
	int speed = 0;

	int distance = 0;

public:	 
	virtual const char* Name() = 0;
	void setDistance(int distance);
	virtual double calcTime() = 0;
};