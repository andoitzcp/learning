#include <stdbool.h>
#include <stdio.h>

bool    narcissistic(int num)
{
    int n;
    int tmp1;
    int tmp2;
    int aux;

    n = 0;
    tmp1 = num;
    while (tmp1 > 0)
    {
        aux = 1;
        tmp2 = num;
        while (tmp2 > 0)
        {
            aux *= (tmp1 % 10);
            tmp2 /= 10;
        }
        n += aux;
        tmp1 /= 10;
    }
    if (n == num)
        return (true);
    else
        return (false);
}
