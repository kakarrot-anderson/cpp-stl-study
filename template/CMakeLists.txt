cmake_minimum_required(VERSION 3.10.0)
project(template_study)

include_directories(
  include
)

set(library_name template_study_lib)

add_library(${library_name}
  src/example_class.cpp
)

add_executable(template_study src/main.cpp)
target_link_libraries(template_study ${library_name})