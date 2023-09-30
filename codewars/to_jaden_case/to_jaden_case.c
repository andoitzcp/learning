#include <stdio.h>

char    ft_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}
char *to_jaden_case (char *jaden_case, const char *string)
{
    char    *ptr;

    ptr = jaden_case;
    while (*string != '\0')
    {
        if (ptr == jaden_case)
            *jaden_case = ft_toupper(*string);
        else
            *jaden_case = *string;
        if (*string == ' ')
        {
            jaden_case++;
            string++;
            *jaden_case = ft_toupper(*string);
        }
        jaden_case++;
        string++;
    }
    jaden_case = ptr;
    return (jaden_case);
}

