#include <iostream>
#include <queue>

int main(int argc, char const *argv[])
{
    std::priority_queue<int> queue;

    queue.push(2);
	queue.push(11);
	queue.push(7);
	queue.push(3);
	queue.push(5);

    std::cout << queue.size() << std::endl;

    while (!queue.empty())
    {
        std::cout << queue.top() << std::endl;
        queue.pop();
    }


    return 0;
}