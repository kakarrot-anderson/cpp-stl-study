#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> vector1;
    std::vector<int> vector2(5);
    std::vector<int> vector3(5, 5);

    for (const auto& element : vector3)
        std::cout << " " << element;
    std::cout << std::endl;

    vector3.insert(vector3.begin() + 2, 4);
    for (const auto& element : vector3)
        std::cout << " " << element;
    std::cout << std::endl;

    vector3.insert(vector3.begin() + 2, 3, 4);
    for (const auto& element : vector3)
        std::cout << " " << element;
    std::cout << std::endl;

    vector3.push_back(6); 
    for (const auto& element : vector3)
        std::cout << " " << element;
    std::cout << std::endl;

    std::cout << vector3.front() << std::endl;
  
    std::cout << vector3.back() << std::endl;

    vector3.pop_back();
    for (const auto& element : vector3)
        std::cout << " " << element;
    std::cout << std::endl; 

    std::cout << vector3.size() << std::endl; 
  
    std::cout << vector3.empty() << std::endl; 

    return 0;
}