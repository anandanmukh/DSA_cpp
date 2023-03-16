#include <stdio.h>

int factorial(int n)
{
    int result = 1;

    if (n < 0)
    {
        return 0;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
            result *= i;
        return result;
    }
}

int main()
{
    int n = 5;
    printf("Factorial of %d is %d", n, factorial(n));
    return 0;
}