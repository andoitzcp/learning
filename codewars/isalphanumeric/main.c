#include <stdio.h>
#include <stdbool.h>

bool    alphanumeric(const char* strin);

int main(void)
{
    printf("%b\n", alphanumeric(""));
    printf("%b\n", alphanumeric(NULL));
    printf("%b\n", alphanumeric("hfgsdhag2345123*fsladj"));
    printf("%b\n", alphanumeric("hfgsdhag2345123hgas"));
}
