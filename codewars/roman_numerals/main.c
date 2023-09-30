#include <stdio.h>
#include <stdlib.h>

void        to_roman(unsigned number, char *roman);
unsigned    from_roman(const char *roman);

int main(void)
{
    char    *roman;
    int     n;

    roman = calloc(256, 1);
    n = 3999;
    to_roman(n, roman);
    printf("roman:\t%d\n", n);
    printf("to_roman:\t%s\n", roman);
    printf("from_roman:\t%d\n", from_roman(roman));
    free(roman);
    roman = calloc(256, 1);
    n = 975;
    to_roman(n, roman);
    printf("roman:\t%d\n", n);
    printf("to_roman:\t%s\n", roman);
    printf("from_roman:\t%d\n", from_roman(roman));
    free(roman);
    roman = calloc(256, 1);
    n = 4;
    to_roman(n, roman);
    printf("roman:\t%d\n", n);
    printf("to_roman:\t%s\n", roman);
    printf("from_roman:\t%d\n", from_roman(roman));
    free(roman);
    roman = calloc(256, 1);
    n = 44;
    to_roman(n, roman);
    printf("roman:\t%d\n", n);
    printf("to_roman:\t%s\n", roman);
    printf("from_roman:\t%d\n", from_roman(roman));
    free(roman);
    roman = calloc(256, 1);
    n = 440;
    to_roman(n, roman);
    printf("roman:\t%d\n", n);
    printf("to_roman:\t%s\n", roman);
    printf("from_roman:\t%d\n", from_roman(roman));
    free(roman);
}
