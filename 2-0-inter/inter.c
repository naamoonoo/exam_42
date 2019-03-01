#include <unistd.h>

int		is_unique(int idx, char *str)
{
	int i;

	i = -1;
	while (++i < idx)
		if (str[idx] == str[i])
			return (0);
	return (1);
}

void	inter(char c, char *str)
{
	while(*str)
	{
		if(*str == c)
		{
			write(1, &c, 1);
			break;
		}
		str++;
	}
}

int	main(int ac, char **av)
{
	int i;

	i = -1;
	if (ac == 3)
	{
		while (av[1][++i])
		{
			if(is_unique(i, av[1]))
			{
				inter(av[1][i], av[2]);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
