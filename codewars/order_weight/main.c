#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct  data
{
    char         *weight;
    int          digitsum;
    struct data  *next;
} data_t;

char    *orderWeight(const char *s);

void    ft_printdata(data_t **head)
{
    int i;
    data_t  *node;

    i = 0;
    node = *head;
    printf("PRINTING LINKED LIST\n");
    printf("node\tweight\tdigitsum\n");
    while (node->next != NULL)
    {
        printf("%d\t%s\t%d\n", i, node->weight, node->digitsum);
        node = node->next;
        i++;
    }
    printf("%d\t%s\t%d\n", i, node->weight, node->digitsum);
}

int     main(void)
{
    char    *s;

    s = strdup("2000 11 11 10003 9669 22 123 1234000 44444444 9999");
    orderWeight(s);
    s = strdup("1 2 200 4 4 6 6 7 7 18 27 72 9 81 91 425 31064 7920 67407 96488 34608557 71899703");
    orderWeight(s);
    s = strdup("9 1 2 4 4 6 6 7 7 18 27 72 81 91 200 425 7920 31064 67407 96488 34608557 71899703");
    orderWeight(s);
    //printf("%s\n%s\n", s, o);
    return (1);
}
