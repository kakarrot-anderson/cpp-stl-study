#include <iostream>
#include <array>

int main(int argc, char const *argv[])
{
    //prime number
    std::array<int, 5> Arr = {2, 3, 5, 7, 11};
    std::array<int, 0> AmptyArr;

    std::cout << "display elements"<<std::endl;
    for (const auto& element : Arr)
        std::cout << " " << element;
    std::cout << std::endl;

    std::cout << "seconds element?"<<std::endl;
    std::cout << Arr.at(1)<<std::endl;
    std::cout << *(Arr.data()+1)<<std::endl;
    std::cout << Arr[1]<<std::endl;
    
    std::cout << "first element?"<<std::endl;
    std::cout << Arr.front()<<std::endl;

    std::cout << "last element?"<<std::endl;
    std::cout << Arr.back()<<std::endl;

    std::cout << "empty?"<<std::endl;
    std::cout << Arr.empty()<<std::endl;

    std::cout << "empty?"<<std::endl;
    std::cout << AmptyArr.empty()<<std::endl;

    std::cout << "size?"<<std::endl;
    std::cout << Arr.size()<<std::endl;

    return 0;
}