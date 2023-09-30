#include <stdio.h>

char    *rot13(const char *src);

int main(void)
{
    printf("%s\n%s\n\n", "abcdefghijklmnopqrstuvwxyz", rot13("abcdefghijklmnopqrstuvwxyz"));
    printf("%s\n%s\n\n", "abcdefghAjklmnoBqrstuvwxyz", rot13("abcdefghijklmnopqrstuvwxyz"));
}
