cmake_minimum_required(VERSION 3.15)
project(zzy_webserver)

set(CMAKE_CXX_STANDARD 14)

add_executable(zzy_webserver main.cpp Util.cpp Util.h Server.cpp Server.h Timer.cpp Timer.h Epoll.cpp Epoll.h HttpRequest.cpp HttpRequest.h HttpResponse.cpp HttpResponse.h ThreadPool.cpp ThreadPool.h Buffer.h Buffer.cpp)


find_package(Threads REQUIRED)
target_link_libraries(zzy_webserver Threads::Threads)