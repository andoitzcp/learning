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

char    ft_tolower(char c)
{
    size_t  i;

    i = 0;
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

char *DuplicateEncoder (const char *string)
{
    char    *out;
    char    c;
    size_t  i;
    size_t  j;

    out = calloc(ft_strlen(string), sizeof(char));
    if (!out)
        return (0);
    i = 0;
    j = 0;
    while (source[i] != '\0')
    {
        c = '(';
        j++;
        while (source[j] != '\0' && out[i] != ')')
        {
            if (ft_tolower(source[i]) == ft_tolower(source[j]))
            {
                c = ')';
                out[j] = c;
            }
            j++;
        }
        if (out[i] != ')')
            out[i] = c;
        i++;
        j = i;
    }
    return (out);
}
