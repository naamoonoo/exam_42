#include <stdio.h>
#include <stdlib.h>

int	pgcd(int a, int b)
{
	int dv;
	int ans;

	dv = a <= b ? a : b;
	while (dv > 0)
	{
		if (a % dv == 0 && b % dv == 0)
		{
			ans = dv;
			break;
		}
		dv--;
	}
	return ans;
}

int	main(int ac, char **av)
{
	int a;
	int b;

	if(ac == 3)
	{
		if(!(a = atoi(av[1])) || !(b = atoi(av[2])) || (a < 0 || b < 0))
		{
			printf("\n");
			return (0);
		}
		if(av[1] && av[2])
		{
			printf("%d\n", pgcd(a, b));
		}
		else
		{
			printf("\n");
		}
		
	}
	return (0);
}
