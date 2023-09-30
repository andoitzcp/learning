#include <stddef.h>
#include <stdio.h>

void to_camel_case(const char *text, char *camel)
{
    size_t  i;

    i = 0;
    while (text[i] != '\0')
    {
        while(text[i] != '-' && text[i] != '_' && text[i] != '\0')
        {
            camel[i] = text[i];
            i++;
        }
        if (text[i] != '\0')
        {
            text++;
            if (text[i] >= 'a' && text[i] <= 'z')
            {
                camel[i] = text[i] - 32;
                i++;
            }
        }
    }
    camel[i] = '\0';
}

