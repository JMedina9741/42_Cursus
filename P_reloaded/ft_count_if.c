int ft_count_if(char **tab, int (*f)(char*))
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (tab[i] != '\0')
    {
        if (f(tab[i]) == 1)
            j++;
        i++;
    }
    return (j);
}