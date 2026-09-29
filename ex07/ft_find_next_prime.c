/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaunky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 09:39:11 by ajaunky           #+#    #+#             */
/*   Updated: 2026/09/29 13:51:27 by ajaunky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	t;

	if (nb < 2)
	{
		nb = 2;
	}
	t = 0;
	while (t != 1)
	{
		t = ft_is_prime(nb);
		if (t != 1)
			nb++;
	}
	return (nb);
}
/*
int	main(int argc, char *argv[])
{
	int	rep;

	if (argc != 2)
		return (0);
	rep = ft_find_next_prime(atoi(argv[1]));
	printf("%d", rep);
	return (0);
}*/
