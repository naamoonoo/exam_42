#include <unistd.h>

void repeat_alpha(char c)
{
	int rep;

	rep = 0;
	if (c >= 'a' && c <= 'z')
		rep = c - 96;
	else if (c >= 'A' && c <= 'Z')
		rep = c - 64;
	else
		rep = 1;
	while(rep-- != 0)
		write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i;

	i = -1;
	if (ac == 2)
	{
		while (av[1][++i])
		{
			repeat_alpha(av[1][i]);
		}
	}
	write(1, "\n", 1);
	return (0);
}
