/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 09:30:36 by hnam              #+#    #+#             */
/*   Updated: 2019/02/23 09:40:11 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int	is_hiden(char *s1, char *s2)
{
	int	i;
	int j;

	i = 0;
	j = -1;
	while (s2[++j])
	{
		if (s1[i] == s2[j])
			i++;
	}
	return (ft_strlen(s1) == i);
}

int	main(int ac, char **av)
{
    if (ac == 3)
    {
		if (is_hiden(av[1], av[2]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}

