/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 09:16:48 by hnam              #+#    #+#             */
/*   Updated: 2019/02/23 09:22:09 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i;
    int len;

    i = 0;
    
    if (ac == 2)
    {
        len = ft_strlen(av[1]);
        while (av[1][i])
            write(1, &av[1][len - i++ - 1], 1);
    }
    write(1, "\n", 1);
    return (0);
}

