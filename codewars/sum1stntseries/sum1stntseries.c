#include <stdlib.h>
#include <stdio.h>

int     ft_nsize(size_t n)
{
    int i;
    int div;

    i = 1;
    div = 1 ;
    if (n == 0)
        return (4);
    while (n / div > 1)
    {
        div *= 10;
        i++;
    }
    return (i);
}

char    *ft_strconstr(char *s, size_t n, unsigned int dp) 
{
    while (dp-- > 0)
    {
        *s = n % 10 + '0';
        n /= 10;
        s--;
    }
    *s = '.';
    if (n == 0)
    {
        s--;
        *s = '0';
    }
    while (n > 0)
    {
        s--;
        *s = n % 10 + '0';
        n /= 10;
    }
    return (s);

}

char    *ft_ftoa(float nbr, unsigned int dp)
{
    char            *s;
    size_t          n;
    unsigned int    i;

    i = 0;
    while (i++ < dp)
        nbr *= 10;
    n = (size_t) nbr; 
    if ((int)(10 * nbr) % 10 >= 5)
        n++;
    i = ft_nsize(n);
    s = calloc(i + 2, 1);
    s = ft_strconstr(s + i, n, dp);
    return (s);
}

char *series_sum(const size_t n)
{
   float    sum;
   float    div;
   size_t   i;
   char     *s;

   sum = 0;
   div = 4;
   i = 1;
   if (n > 0)
       sum ++;
   while (n > 1 && i < n)
   {
       sum += 1 / div;
       div += 3;
       i++;
   }
   printf("%f\n", sum);
   s = ft_ftoa(sum, 2); 
   return (s);
}

int main(void)
{
    printf("RESULT:\t%s\n", series_sum(0));
    printf("RESULT:\t%s\n", series_sum(1));
    printf("RESULT:\t%s\n", series_sum(2));
    printf("RESULT:\t%s\n", series_sum(3));
    printf("RESULT:\t%s\n", series_sum(5));
    printf("RESULT:\t%s\n", series_sum(500000));
    printf("RESULT:\t%s\n", series_sum(50000000));
}
