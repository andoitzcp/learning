#include <stddef.h>

int     is_vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return (1);
    return (0);
}
size_t get_count(const char *s)
{
    size_t  i;

    i = 0;
    while (*s != '\0')
    {
        if (is_vowel(*s) == 1)
            i++;
        s++;
    }
    return (i);
}
