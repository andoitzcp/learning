#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct  data
{
    char    *weight;
    int     digitsum;
} data_t;

void    ft_printdata(data_t *data, int sz);

int     ft_listsz(const char *s)
{
    int sz;

    sz = 0;
    while (*s != '\0')
    {
        while (*s == ' ')
            s++;
        while (*s >= '0' && *s <= '9')
            s++;
        if (*s < '0' && *s > '9' && *s != ' ')
            return (-1);
        sz++;
    }
    return (sz);
}

void    ft_ssplit(const char *s, data_t *data)
{
    int i;
    int j;

    i = 0;
    while (*s != '\0')
    {
        while (*s == ' ')
            s++;
        j = 0;
        while (s[j] >= '0' && s[j] <= '9')
            j++;
        data[i].weight = strndup(s, j);
        printf("1.1:\t%s\n", data[i].weight);
        printf("1.2:\t%s\n", data[0].weight);
        s += j;
        i++;
    }
}

void    ft_digitsum(data_t *data, int sz)
{
    int i;
    int j;
    int n;

    i = 0;
    while (sz > 0)
    {
        j = 0;
        n = 0;
        printf("s2.1:\t%s\n", data[i].weight);
        while (data[i].weight[j] != '\0')
        {
            n += data[i].weight[j] - '0';
            //printf("c:%c\n", data[i].weight[j]);
            j++;
        }
        data[i].digitsum = n;
        //printf("d2.1:\t%d\n", data[i].digitsum);
        i++;
        sz--;
        //printf("sz2.1:\t%d\n", sz);
    }
}
/*
void   ft_orderbydigitsum(data_t *data)
{
    int i;
    int tmp;

    i = 0;
    while (i < data->sz - 1)
    {
        if (data->digitsum[i] > data->digitsum[i + 1])
        {
            tmp = data->digitsum[i];
            data->digitsum[i] = data->digitsum[i + 1];
            data->digitsum[i + 1] = tmp;
            tmp = data->weight[i];
            data->weight[i] = data->weight[i + 1];
            data->weight[i + 1] = tmp;
            i = 0;
        }
        else if (data->digitsum[i] == data->digitsum[i + 1])
        {
            if (data->weight[i] > data->weight[i + 1])
            {
            tmp = data->digitsum[i];
            data->digitsum[i] = data->digitsum[i + 1];
            data->digitsum[i + 1] = tmp;
            tmp = data->weight[i];
            data->weight[i] = data->weight[i + 1];
            data->weight[i + 1] = tmp;
            i = 0;
            }
            else
                i++;
        }
        else
            i++;
    }
}
*/

data_t  *ft_returnstruct(const char *s)
{
    data_t  *data;
    int     sz;

    sz = ft_listsz(s);
    printf("flag0\t%d\n", sz);
    data = calloc(sz, sizeof(data));
    if (!data)
        return(NULL);
    printf("flag1\n");
    ft_ssplit(s, data);
    printf("flag2\n");
    ft_digitsum(data, sz);
    printf("flag3\n");
    ft_printdata(data, sz);
    return (data);
}

char    *orderWeight(const char *s)
{
    data_t  *data;
    char    *o;
    int     sz;
   
    sz = ft_listsz(s);
    data = calloc(sz, sizeof(data));
    if (!data)
        return(NULL);
    o = calloc(strlen(s) + 1, sizeof(char));
    if (!o)
        return(NULL);
    ft_ssplit(s, data);
    ft_digitsum(data, sz);
    //ft_orderbydigitsum(data);
    return (o);
}
