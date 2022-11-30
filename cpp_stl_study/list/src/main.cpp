#include <iostream>
#include <list>

int main(int argc, char const *argv[])
{
    std::list<int> list1;
    std::list<int> list2(5);
    std::list<int> list3(5, 5);

    for (const auto& element : list3)
        std::cout << " " << element;
    std::cout << std::endl;

    list3.push_front(0);
    for (const auto& element : list3)
        std::cout << " " << element;
    std::cout << std::endl;

    list3.push_back(6); 
    for (const auto& element : list3)
        std::cout << " " << element;
    std::cout << std::endl;

    std::cout << list3.front() << std::endl;
  
    std::cout << list3.back() << std::endl;

    list3.pop_front(); 
    for (const auto& element : list3)
        std::cout << " " << element;
    std::cout << std::endl;

    list3.pop_back();
    for (const auto& element : list3)
        std::cout << " " << element;
    std::cout << std::endl; 

    std::cout << list3.size() << std::endl; 
  
    std::cout << list3.empty() << std::endl; 
      
    

    

  return 0;
}