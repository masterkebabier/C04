/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaunky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:41:00 by ajaunky           #+#    #+#             */
/*   Updated: 2026/09/24 21:22:27 by ajaunky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	rep;

	rep = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (rep);
	else
	{
		rep = nb * ft_recursive_factorial(nb - 1);
		return (rep);
	}
}
/*
int	main(int argc, char *argv[])
{
	int	rep = 0;
	if (argc != 2)
		return (0);
	rep = ft_recursive_factorial(atoi(argv[1]));
	printf("%d", rep);
	return (0);
}*/
