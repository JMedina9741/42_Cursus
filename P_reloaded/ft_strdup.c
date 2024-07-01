#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char    *res;
    unsigned int    len;

    len = 0;
    while (src[len] != '\0')
        len++;
    res = (char *)malloc(sizeof(*res) * (len + 1));
    len = 0;
    while (src[len] != '\0')
    {
        res[len] = src[len];
        len++;
    }
    res[len] = '\0';
    return (res);
}