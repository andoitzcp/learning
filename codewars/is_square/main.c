#include <stdio.h>
#include <stdbool.h>

bool    is_square(int n);

int main(void)
{
    printf("%b\n", is_square(-10));
    printf("%b\n", is_square(0));
    printf("%b\n", is_square(1));
    printf("%b\n", is_square(4));
    printf("%b\n", is_square(10));
    printf("%b\n", is_square(400));
}
