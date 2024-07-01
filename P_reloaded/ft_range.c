#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *res;

    if (min >= max)
        return (0);
    res = (int *)malloc(sizeof(*res) * (max - min));
    if (!res)
        return (0);
    i = 0;
    while (min < max)
    {
        res[i] = min;
        i++;
        min++;
    }
    return (res);
}