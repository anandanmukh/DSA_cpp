#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> sample_stack;
    for (int i = 0; i <= 5; i++)
    {
        sample_stack.push(i);
    }
    while (!sample_stack.empty())
    {
        int x = sample_stack.top();
        sample_stack.pop();
        cout << x << " ";
    }
    return 0;
}