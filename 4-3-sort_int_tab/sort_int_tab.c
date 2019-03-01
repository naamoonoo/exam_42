void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int    i;

    while(size)
    {
        i = -1;
        while (++i < size - 1)
        {
            if (tab[i] > tab[i + 1])
                ft_swap(&tab[i], &tab[i + 1]);
        }
        size--;
    }
}
