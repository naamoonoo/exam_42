#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	i = -1;
	if (ac == 4)
		while(av[1][++i])
		{
			if(av[1][i] == av[2][0])
				write(1, &av[3][0], 1);
			else
				write(1, &av[1][i], 1);
		}
	write(1, "\n", 1);
	return (0);
}

