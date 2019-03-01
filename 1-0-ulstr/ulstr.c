#include <unistd.h>

void	ulstr(char c)
{
	char temp;

	if (c >= 'a' && c <= 'z')
		temp = c - 32;
	else if (c >= 'A' && c <= 'Z')
		temp = c + 32;
	else
		temp = c;
	write(1, &temp, 1);
}

int	main(int ac, char **av)
{
	int i;

	i = -1;
	if (ac == 2)
		while(av[1][++i])
		{
			ulstr(av[1][i]);
		}
	write(1, "\n", 1);
	return (0);
}

