int ft_sqrt(int nb)
{
    int i;

    i = 1;
    if (nb < 0)
        return (0);
    else
    {
        while ((i * i <= nb) && (i <= 46340))
        {
            if (i * i == nb)
                return (i);
            else
                i++;
        }
        return (0);
    }
}