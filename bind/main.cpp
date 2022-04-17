#include <functional>
#include <memory>
#include <iostream>
#include "function.hpp"

int main(int argc, char const *argv[])
{
  using BindedFunction = std::function<int(int,int)>;
  Calculator calculator;

  BindedFunction binded = &addTwoInt;
  std::cout<< "function bind : "<<binded(1,2)<<std::endl;
  std::cout<<"class bind : "<<calculator.calculate(1,2)<<std::endl;

  return 0;
}
