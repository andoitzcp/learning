#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *to_jaden_case (char *jaden_case, const char *string);

int main (void)
{
    char    *string;
    char    *jaden_case;

    string = strdup("Hola que tal estas?");
    jaden_case = 
    printf("input:\t%s\noutput:\t%s\n", string, to_jaden_case(jaden_case, string)); 

    string = "hola que tal estas?";
    printf("input:\t%s\noutput:\t%s\n", string, to_jaden_case(jaden_case, string)); 
    printf("input:\t%s\noutput:\t%s\n", "", to_jaden_case("", "")); 
}
