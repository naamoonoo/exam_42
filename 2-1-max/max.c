int	max(int* tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	max = tab[0] ? tab[0] : 0;
	i = -1;
	while (++i < len)
		if (tab[i] > max)
			max = tab[i];
	return max;
}
