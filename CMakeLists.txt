cmake_minimum_required(VERSION 3.10.0)
project(cpp_stl_study)

file(GLOB SUB_DIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${PROJECT_NAME}/*)
foreach(SUB_DIR ${SUB_DIRS})
  string(REPLACE "/" ";" SUB_DIR_FOLDERS ${SUB_DIR})  
  list(GET SUB_DIR_FOLDERS 1 SUB_PROJECT)
  set(SUB_PROJECT_DIR ${PROJECT_NAME}/${SUB_PROJECT})
  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${SUB_PROJECT_DIR}/CMakeLists.txt)
    message("package detected : ${SUB_PROJECT}")
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)
    add_subdirectory(${SUB_PROJECT_DIR})
  endif()
  
endforeach()


