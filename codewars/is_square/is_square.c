#include <stdbool.h>

bool    is_square(int n)
{
    int i;

    if (n < 0)
        return (false);
    i = 0;
    while (i * i < n)
        i++;
    if (i * i == n)
        return (true);
    else
        return (false);
}
