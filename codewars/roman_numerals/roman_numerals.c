#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int         ft_addorsubstract(const char *roman)
{
    char    *rochr;
    int     roval[7] = {1000, 500, 100, 50, 10, 5, 1};
    int     i;
    int     j;

    rochr = strdup("MDCLXVI");
    i = 0;
    while (roman[0] != rochr[i])
        i++;
    if (roman[1] == '\0')
        return(free(rochr), roval[i]);
    j = 0;
    while (roman[1] != rochr[j])
        j++;
    if (j < i)
        return(free(rochr), -1 * roval[i]);
    else
        return(free(rochr), roval[i]);
}

unsigned    from_roman(const char *roman)
{
    unsigned int    n;

    n = 0;
    while (*roman != '\0')
    {
        n += ft_addorsubstract(roman);
        roman++;
    }
    return (n);
}

void        ft_romanconstructor(int mod, int i, char *roman)
{
    char    *s1;
    char    *s2;
    
    s1 = strdup("MCXI");
    s2 = strdup("MDLV");
    if (mod > 4 && mod < 9)
    {
        roman = strcat(roman, strndup(s2 + i, 1));
        mod -= 5;
    }
    if (mod > 0 && mod < 4)
    {
        while (mod-- > 0)
            roman = strcat(roman, strndup(s1 + i, 1));
    }
    if (mod == 4)
    {
        roman = strcat(roman, strndup(s1 + i, 1));
        roman = strcat(roman, strndup(s2 + i, 1));
    }
    if (mod == 9)
    {
        roman = strcat(roman, strndup(s1 + i, 1));
        roman = strcat(roman, strndup(s1 + i - 1, 1));
    }
    free(s1);
    free(s2);
}

void        to_roman(unsigned number, char *roman)
{
    int     div;
    int     i;

    div = 1000;
    i = 0;
    while (div > 0)
    {
        ft_romanconstructor(number / div, i, roman);
        number = number % div;
        div /= 10;
        i++;
    }
}
