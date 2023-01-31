cmake_minimum_required (VERSION 3.10)

project(transport)

add_library(tansport SHARED ../Transport/MakeTransport.h ../Transport/MakeTransport.cpp ../Transport/Transport.h ../Transport/Transport.cpp ../Transport/Air.cpp ../Transport/Air.h ../Transport/boots.cpp ../Transport/boots.h ../Transport/broom.cpp ../Transport/broom.h ../Transport/camel.cpp ../Transport/camel.h ../Transport/camel_faster.cpp ../Transport/camel_faster.h ../Transport/carpet.cpp ../Transport/carpet.h ../Transport/centaur.cpp ../Transport/centaur.h ../Transport/eagle.cpp ../Transport/eagle.h ../Transport/Ground.cpp ../Transport/Ground.h)