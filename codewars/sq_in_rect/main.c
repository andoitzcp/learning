#include <stdio.h>

typedef struct Data Data;
struct Data
{
    int *array;
    int sz;
};

Data* sqInRect(int lng, int wdth);

int main(void)
{
    Data    *Data;

    printf("main1\n");
    Data = sqInRect(5, 3);
    printf("Size:\t%d\n", Data->sz);
    printf("[ ");
    while (Data->sz > 0)
    {
        printf("%d,", *Data->array);
        Data->array++;
        Data->sz--;
    }
    printf(" ]");
}
