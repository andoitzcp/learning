#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

size_t  ft_strlen(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

char    ft_rotchar(char c, int r)
{
    if (c >= 'A' && c <= 'Z')
        c = (c - 'A' + r) % 26 + 'A';
    else if (c >= 'a' && c <= 'z')
        c = (c - 'a' + r) % 26 + 'a';
    return (c);
}

char    *rot13(const char *src)
{
    char    *dst;
    char    *ptr;

    dst = calloc(ft_strlen(src) + 1, sizeof(char));
    if (!dst)
        return (0);
    ptr = dst;
    while (*src != '\0')
    {
        *dst = ft_rotchar(*src, 13);
        src++;
        dst++;
    }
    return (ptr);
}
