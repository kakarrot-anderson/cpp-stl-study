#ifndef BIND__FUNCTION_HPP_
#define BIND__FUNCTION_HPP_
#include <functional>
#include <memory>

int addTwoInt(int num1, int num2)
{
  return num1 + num2;
}

class Calculator
{
public:

  using ExecuteFunction = std::function<int(void)>;

  Calculator() {}

  int calculate(int num1, int num2){
    return execute(
      std::bind(&Calculator::add, this, num1, num2)
    );
  }

protected:

  int add(int num1, int num2){
    return num1 + num2;
  }

  int execute(ExecuteFunction ex_function = nullptr){
    return ex_function();
  }

};



#endif