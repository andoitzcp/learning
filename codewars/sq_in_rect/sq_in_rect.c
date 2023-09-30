#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Data Data;
struct Data
{
    int *array;
    int sz;
};

Data    *sqInRect(int lng, int wdth)
{   
    int     sqsize;
    Data    *Data;
    int     *tmp;

    Data = calloc(1, sizeof(Data));
    sqsize = 0;
    Data->sz = 0;
    Data->array = 0;
    while (lng != 0 && wdth != 0)
    {
        Data->sz++;
        tmp = Data->array;
        Data->array = calloc(Data->sz, sizeof(int));
        if (tmp != 0)
        {
            memcpy(Data->array, tmp, Data->sz * sizeof(int));
            free(tmp);
        }
        if (lng == wdth)
        {
            sqsize = wdth;
            wdth = 0;
            lng = 0;
        }
        else if (lng > wdth)
        {
            sqsize = wdth;
            lng -= sqsize;
        }
        else
        {
            sqsize = lng;
            wdth -= sqsize;
        }
        Data->array[Data->sz -1] = sqsize;
    }
    if (Data->sz == 1)
    {
        *Data->array = 0;
        free(Data->array);
        Data = 0;
    }
    return (Data);
}
