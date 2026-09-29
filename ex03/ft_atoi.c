/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaunky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:04:49 by ajaunky           #+#    #+#             */
/*   Updated: 2026/09/26 20:49:50 by ajaunky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	signe;
	int	i;
	int	rep;

	signe = 1;
	i = 0;
	rep = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signe = signe * (-1);
			i++;
		}
		if (str[i] == '+')
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rep = (rep * 10) + (str[i] - '0');
		i++;
	}
	return (signe * rep);
}
/*
int	main(int argc, char *argv[])
{
	int	rep;
	
	if (argc != 2)
		return (0);
	rep = ft_atoi(argv[1]);
	printf("%d", rep);
	return (0);
}*/
