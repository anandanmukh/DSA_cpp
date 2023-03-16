#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> sample_queue;
    for (int i = 0; i <= 5; i++)
    {
        sample_queue.push(i);
    }
    while (!sample_queue.empty())
    {
        int x = sample_queue.front();
        sample_queue.pop();
        cout << x << " ";
    }
    return 0;
}