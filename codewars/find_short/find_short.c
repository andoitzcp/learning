#include <sys/types.h>
#include <string.h>

ssize_t find_short(const char *s)
{
    while (*s != '\0')
    {
        s++;
    }
}
