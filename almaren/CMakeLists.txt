cmake_minimum_required (VERSION 2.6)
add_compile_options(-std=c++11)
add_compile_options(-pthread)
project (almaren)

# add libraries
include_directories(/usr/local/include)
link_directories(/usr/local/lib)

# add the executable
add_executable(almaren
    almaren.cpp)

target_link_libraries(almaren
  boost_system
  nghttp2_asio
  pthread
  boost_thread
  ssl
  crypto)
