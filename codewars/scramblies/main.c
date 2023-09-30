#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct  chars
{
    char            c;
    size_t          n;
    struct chars    *next;
}               chars_t;

bool    scramble(const char *str1, const char *str2);

void    ft_printllist(chars_t **head)
{
    chars_t *node;

    node = *head;
    printf("char\tfreq\n");
    while (node)
    {
        printf("%c\t\t%ld\n", node->c, node->n);
        node = node->next;
    }
}
int main(void)
{
    char    *s1;
    char    *s2;
    bool    isposible;

    s1 = strdup("asdfg");
    s2 = strdup("ass");
    printf("s1:\t%s\n", s1);
    printf("s2:\t%s\n", s2);
    isposible = scramble(s1, s2);
    printf("is posible:\t%b\n", isposible);
}
