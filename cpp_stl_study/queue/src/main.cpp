#include <iostream>
#include <queue>

int main(int argc, char const *argv[])
{
    std::queue<int> queue;

    queue.push(1);
	queue.push(2);
	queue.push(3);
	queue.push(4);
	queue.push(5);

    std::cout << queue.size() << std::endl; 

    std::cout << queue.front() << std::endl; 

    std::cout << queue.back() << std::endl; 

    while (!queue.empty())
    {
        std::cout << queue.front() << std::endl;
        queue.pop();
    }


    return 0;
}