#include<iostream>
#include<functional>

class Test
{    
    public:
        int NomalAdd(int a, int b, int(*f)(int a, int b)){return f(a, b);};
        int FunctionAdd(int a, int b, std::function<int (int, int)> f){return f(a, b);};

               int NomalCalc(int a, int b){return(a+b);};
        static int StaticCalc(int a, int b){return(a+b);};// 일반 함수 포인터로 취급..
        
        
};

int Add(int a, int b, int(*f)(int a, int b)){return f(a, b);};
int Calc(int a, int b){return(a+b);};

int main(void)
{
    Test test;
    printf("%d\n", test.NomalAdd(1, 2, test.StaticCalc));
    printf("%d\n", test.NomalAdd(1, 2, &test.StaticCalc));
    printf("%d\n", test.NomalAdd(1, 2, Test::StaticCalc));
    printf("%d\n", test.NomalAdd(1, 2, &Test::StaticCalc));
    //printf("%d\n", test.NomalAdd(1, 2, &Test::Calc));
    printf("%d\n", Add(1, 2, Calc));
    printf("%d\n", Add(1, 2, &Calc));

    std::function <int (int, int)> f1 = std::bind(&Test::NomalCalc, &test, std::placeholders::_1, std::placeholders::_2);// 
    std::function <int (int, int)> f2 = std::bind(&Test::StaticCalc, std::placeholders::_1, std::placeholders::_2);
    auto f3 = std::bind(&Test::NomalCalc, &test, std::placeholders::_1, std::placeholders::_2);
    auto f4 = std::bind(&Test::StaticCalc, std::placeholders::_1, std::placeholders::_2);

    printf("%d\n", test.FunctionAdd(1, 2, f1));
    printf("%d\n", test.FunctionAdd(1, 2, f2));
    printf("%d\n", test.FunctionAdd(1, 2, f3));
    printf("%d\n", test.FunctionAdd(1, 2, f4));
    
    return 0;
}

// class Test
// {    
//     public:
//         using CalcFunc = std::function<int (int, int)>;
//         int calc(int a, int b){return(a+b);};
//         int add(int a, int b, CalcFunc f){return f(a, b);};
// };

// int main(void){

//     Test test;
//     printf("%d\n", test.add(1, 2, std::bind(&Test::calc, &test, std::placeholders::_1, std::placeholders::_2)));
    
//     return 0;
// }