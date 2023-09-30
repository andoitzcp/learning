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
    size_t  i;
    size_t  j;

    out = calloc(ft_strlen(string) + 1, sizeof(char));
    if (!out)
        return (0);
    i = 0;
    j = 0;
    while (string[i] != '\0')
    {
        out[i] = '(';
        j++;
        while (string[j] != '\0') 
        {
            if (ft_tolower(string[i]) == ft_tolower(string[j]))
            {
                out[i] = ')';
                out[j] = ')';
            }
            j++;
        }
        i++;
        j = i;
    }
    //out[i] = '\0';
    return (out);
}
