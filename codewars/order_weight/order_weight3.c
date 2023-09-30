#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct  data
{
    char         *weight;
    int          digitsum;
    struct data  *next;
} data_t;

void    ft_printdata(data_t **head);

int     ft_digitsum(char *s)
{
    int n;

    n = 0;
    while (*s != '\0')
    {
        n += *s - '0';
        s++;
    }
    return (n);
}

void    ft_createllist(const char *s, data_t **head)
{
    int     i;
    data_t  *new_node;

    printf("CREATING LINKED LIST\n");
    while (*s != '\0')
    {
        while (*s == ' ')
            s++;
        i = 0;
        while (s[i] >= '0' && s[i] <= '9')
            i++;
        new_node = (data_t *)malloc(sizeof(data_t));
        new_node->weight = strndup(s, i);
        new_node->digitsum = ft_digitsum(new_node->weight);
        new_node->next = *head;
        *head = new_node;
        s += i;
    }
}

data_t  *ft_sortbydigitsum(data_t *sorted, data_t *node)
{
    data_t  *current;

    if (!sorted || sorted->digitsum >= node->digitsum)
    {
        node->next = sorted;
        sorted = node;
    }
    else
    {
        current = sorted;
        while (current->next && node->digitsum > current->next->digitsum)
            current = current->next;
        node->next = current->next;
        current->next = node;
    }
    return (sorted);
}

data_t  *ft_sortbyweight(data_t *sorted, data_t *node)
{
    data_t  *current;

    if (!sorted)
    {
        node->next = sorted;
        sorted = node;
    }
    else
    {
        current = sorted;
        while (current->next &&
                strcmp(node->weight, current->next->weight) < 0)
            current = current->next;
        node->next = current->next;
        current->next = node;
    }
    return (sorted);
}

void    ft_orderdata(data_t **head)
{
    data_t  *sorted; 
    data_t  *node;
    data_t  *next;;

    sorted = NULL;
    node = *head;
    printf("SORTING LINKED LIST\n");
    while (node)
    {
        next = node->next;
        sorted = ft_sortbyweight(sorted, node);
        node = next;
    }
    node = sorted;
    sorted = NULL;
    while (node)
    {
        next = node->next;
        sorted = ft_sortbydigitsum(sorted, node);
        node = next;
    }
    *head = sorted;
}

char    *ft_constructoutput(data_t **head)
{
    char    *out;
    data_t  *node;
    size_t  len;

    node = *head;
    len = 0;
    while (node)
    {
        len += strlen(node->weight);
        len++;
        node = node->next;
    }
    out = (char *)calloc(len, sizeof(char));
    node = *head;
    while (node->next)
    {
        out = strcat(out, node->weight);
        out = strcat(out, " ");
        node = node->next;
    }
    out = strcat(out, node->weight);
    return (out);
}

char    *orderWeight(const char *s)
{
    data_t  **head;
    char    *out;

    head = malloc(sizeof(data_t **));
    *head = NULL;
    ft_createllist(s, head);
    ft_printdata(head);
    ft_orderdata(head);
    ft_printdata(head);
    out = ft_constructoutput(head);
    printf("strcmp: %d\n", strcmp("81", "9"));
    printf("strcmp: %d\n", strcmp("2000", "11"));
    printf("IN:\t");
    printf("%s\n", s);
    printf("OUT\t");
    printf("%s\n", out);
    return (out);
}
