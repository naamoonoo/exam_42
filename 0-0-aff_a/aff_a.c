#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	i = -1;
	if (ac == 2)
	{
		while (av[1][++i])
		{
			if (av[1][i] == 'a')
			{
				write(1, &av[1][i], 1);
				break;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
