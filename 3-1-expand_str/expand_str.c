#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int len;
	
	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		get_start_idx(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] != '\t' && str[i] != ' ')
			break;
	return (i);
}

int		main(int argc, char *argv[])
{
	int i;
	int start;
	int len;

	
	if (argc == 2 && argv[1][0])
	{
		i = get_start_idx(argv[1]);
		len = ft_strlen(argv[1]);
		if (i != len)
			len -= i--;
		while (++i < len && argv[1][i + 1])
		{
			if (argv[1][i] != '\t' && argv[1][i] != ' ')
				ft_putchar(argv[1][i]);
			else if (argv[1][i] == '\t' || argv[1][i] == ' ')
			{
				if (argv[1][i + 1] != '\t'&& argv[1][i + 1] != ' ')
					write(1, "   ", 3);
			}
		}
		if (argv[1][i] != '\t' && argv[1][i] != ' ')
			ft_putchar(argv[1][i]);
	}
	ft_putchar('\n');
	return (0);
}