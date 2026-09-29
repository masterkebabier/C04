/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaunky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 21:36:20 by ajaunky           #+#    #+#             */
/*   Updated: 2026/09/24 21:54:21 by ajaunky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
int	main (int argc, char *argv[])
{
	int	rep = 0;
	if (argc != 3)
		return (0);
	rep = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
	printf("%d", rep);
	return (0);
}*/
