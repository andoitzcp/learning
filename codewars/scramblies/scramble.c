#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

typedef struct  chars
{
    char            c;
    size_t          n;
    struct chars    *next;
}               chars_t;

void    ft_printllist(chars_t **head);

chars_t *ft_createnewnode(char c)
{
    chars_t *new_node;

    new_node = (chars_t *)malloc(sizeof(chars_t *));
    new_node->c = c;
    new_node->n = 1;
    new_node->next = NULL;
    return(new_node);
}

void    ft_constructllist(chars_t **head, const char *str2)
{
    chars_t *node;
    chars_t *new_node;

     if (!*head)
     {
         new_node = ft_createnewnode(*str2);
         (*head) = new_node;
         node = new_node;
         str2++;
     }
    while (*str2 != '\0')
    {
        node = *head;
        while (node->next && node->c != *str2)
            node = node->next;
        if (node->c != *str2)
        {
            new_node = ft_createnewnode(*str2);
            node->next = new_node;
        }
        else
            node->n++;
        str2++;
    }
    node = *head;
}

bool    ft_isposible(chars_t **head, const char *str1)
{
    chars_t *node;
    size_t  count;
    size_t  i;

    node = *head;
    while (node)
    {
        count = 0;
        i = 0;
        while (str1[i] != '\0')
        {
            if (str1[i] == node->c)
                count++;
            i++;
        }
        if (count < node->n)
            return (false);
        node = node->next;
    }
    return (true);
}

bool    scramble(const char *str1, const char *str2)
{
    chars_t **head;

    head = (chars_t **)malloc(sizeof(chars_t **));
    *head = NULL;
    ft_constructllist(head, str2);
    ft_printllist(head);
    return(ft_isposible(head, str1));
}
