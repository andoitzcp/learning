#include <stdbool.h>
#include <stddef.h>

size_t  ft_strlen(const char *s)
{
    size_t  len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}

bool    ft_isalpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return (true);
    else if (c >= 'A' && c <= 'Z')
        return (true);
    else
        return (false);
}

bool    ft_isnum(char c)
{
    if (c >= '0' && c <= '9')
        return (true);
    else
        return (false);
}

bool    ft_isalphanum(char c)
{
    if (ft_isalpha(c) || ft_isnum(c))
        return (true);
    else
        return (false);
}
bool alphanumeric(const char* strin)
{
    if (!strin)
        return (false);
    if (!ft_strlen(strin))
        Return (false);
    while(*strin != '\0')
    {
        if (!ft_isalphanum(*strin))
            return (false);
        strin++;
    }
    return (true);
}
