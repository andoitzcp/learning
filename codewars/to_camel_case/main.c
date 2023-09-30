#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void to_camel_case(const char *text, char *camel);

int main (void)
{
    char    *s;
    char    *d;

    s = strdup("the-stealth-warrior");
    d = calloc(strlen(s) + 1, sizeof(char));
    printf("%s\n", s);
    to_camel_case(s, d);
    printf("%s\n", d);
    free(s);
    free(d);
    s = strdup("");
    d = calloc(strlen(s) + 1, sizeof(char));
    printf("%s\n", s);
    to_camel_case(s, d);
    printf("%s\n", d);
    free(s);
    free(d);
    s = strdup("A-B_C");
    d = calloc(strlen(s) + 1, sizeof(char));
    printf("%s\n", s);
    to_camel_case(s, d);
    printf("%s\n", d);
    free(s);
    free(d);
}
