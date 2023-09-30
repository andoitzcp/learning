#include <stdio.h>
int ft_substrlen(char *s)
{
    char    *p;
    int     i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
        p = s;
        while (p < s + i && *p != '\0')
        {
            if (*p == s[i])
                return (i);
            p++;
        }
    }
    return (i);
}
int lengthOfLongestSubstring(char * s)
{
    int    substrlen;
    int    tmp;

    substrlen = 0;
    while (*s != '\0')
    {
        tmp = ft_substrlen(s);
        if (tmp > substrlen)
            substrlen = tmp;
        s++;
    }
    return (substrlen);
}

int main (void)
{
    printf("bbbb\t%d\n", lengthOfLongestSubstring("bbbb"));
    printf("abcabcbb\t%d\n", lengthOfLongestSubstring("abcabcbb"));
    printf("pwwkew\t%d\n", lengthOfLongestSubstring("pwwkew"));
    printf("123pw123wkew\t%d\n", lengthOfLongestSubstring("123pw123wkew"));
}
