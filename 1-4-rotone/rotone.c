#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rotone(char c)
{
    if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
        c++;
    else if (c == 'z' || c == 'Z')
        c -= 25;
    ft_putchar(c);
}

int     main(int argc, char *argv[])
{
    if (argc == 2)
	{
        while(*argv[1])
        {
            rotone(*argv[1]++);
        }
    }
    ft_putchar('\n');
    return (0);
}