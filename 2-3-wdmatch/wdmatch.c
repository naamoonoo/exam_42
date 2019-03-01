#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	while (str[len])
		len++;
	return len;
}

int wdmatch(char* s1, char *s2, int len)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while(s2[++j])
		if(s2[j] == s1[i])
			i++;
	return (i == len);
}

int	main(int ac, char **av)
{
	int i;

	i = -1;
	if (ac == 3)
	{
		if(wdmatch(av[1], av[2], ft_strlen(av[1])))
		{
			while (av[1][++i])
				write(1, &av[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
