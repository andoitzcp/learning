#include <stdbool.h>
#include <stdio.h>

bool    narcissistic(int num);

int main(void)
{
    printf("bool:\t%b\n", narcissistic(5));
    printf("bool:\t%b\n", narcissistic(7));
    printf("bool:\t%b\n", narcissistic(371));
    printf("153\n");
    printf("bool:\t%b\n", narcissistic(153));
}
