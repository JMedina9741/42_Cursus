void    ft_putchar(char c);

int main(int argc, char **argv)
{
    int i;

    i = 0;
    while (i < argc)
    {
        while (*argv[i] != '\0')
        {
            ft_putchar(*argv[i]);
            argv[i]++;
        }
        ft_putchar('\n');
        i++;
    }
    return (0);
}