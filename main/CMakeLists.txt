cmake_minimum_required(VERSOIN 3.10)
project(main)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(transport SHARED ../Transport/MakeTransport.h ../Transport/MakeTransport.cpp ../Transport/Transport.h ../Transport/Transport.cpp ../Transport/Air.cpp ../Transport/Air.h ../Transport/boots.cpp ../Transport/boots.h ../Transport/broom.cpp ../Transport/broom.h ../Transport/camel.cpp ../Transport/camel.h ../Transport/camel_faster.cpp ../Transport/camel_faster.h ../Transport/carpet.cpp ../Transport/carpet.h ../Transport/centaur.cpp ../Transport/centaur.h ../Transport/eagle.cpp ../Transport/eagle.h ../Transport/Ground.cpp ../Transport/Ground.h)

add_executable(main main.cpp) 

target_link_libraries(main transport)