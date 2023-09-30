#include <stdio.h>

char *DuplicateEncoder (const char *string);

int main (void)
{
    printf("%s\n", "abcAdead");
    printf("%s\n", DuplicateEncoder("abcAdead"));
    printf("%s\n", "+S`MbM2P2lj`a?+4`R8afea R6}(+Za{``(U6^lg");
    printf("%s\n", DuplicateEncoder("+S`MbM2P2lj`a?+4`R8afea R6}(+Za{``(U6^lg"));
    printf("%s\n", "+S`MbM2P2lj`a?+4`R8afea R6}(+Za{``(U6^l");
    printf("%s\n", DuplicateEncoder("+S`MbM2P2lj`a?+4`R8afea R6}(+Za{``(U6^l"));
    printf("%s\n", "g");
    printf("%s\n", DuplicateEncoder("g"));
    printf("%s\n", "+S`MbM2P2lj`a?+4`R8afea R6}(+Za{``(U6^lx");
    printf("%s\n", DuplicateEncoder("+S`MbM2P2lj`a?+4`R8afea R6}(+Za{``(U6^lx"));
}
