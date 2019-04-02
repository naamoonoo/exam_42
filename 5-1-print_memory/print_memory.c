#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void	print_memory(const void *addr, size_t size)
{
	size_t			i;
	size_t			j;
	char			*base;
	unsigned char	*p;

	p = (unsigned char *)addr;
	i = 0;
	base = "0123456789abcdef";
	while (i < size)
	{
		j = 0;
		while (j < 16 && i + j < size)
		{
			ft_putchar(base[(p[i + j] / 16) % 16]);
			ft_putchar(base[p[i + j] % 16]);
			j++ % 2 ? ft_putchar(' ') : 0;
		}
		while (j < 16)
		{
			ft_putstr("  ");
			j++ % 2 ? ft_putchar(' ') : 0;
		}
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (p[i + j] >= 32 && p[i + j] < 127)
				ft_putchar(p[i + j]);
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i += 16;
	}
}

int	main(void)
{
	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}
