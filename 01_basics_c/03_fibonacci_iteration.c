#include <stdio.h>

int fibonacci(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        for (i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main()
{
    for (int i = 1; i < 10; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}