/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 09:23:04 by hnam              #+#    #+#             */
/*   Updated: 2019/02/23 09:29:21 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	do_op(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
		return (a / b);
	else
		return (a % b);

}

int	main(int ac, char **av)
{
    if (ac == 4)
		printf("%d\n", do_op(atoi(av[1]), atoi(av[3]), *av[2]));
	else
    	write(1, "\n", 1);
    return (0);
}

