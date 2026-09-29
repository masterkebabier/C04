/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaunky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 21:52:45 by ajaunky           #+#    #+#             */
/*   Updated: 2026/09/23 21:59:43 by ajaunky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	int rep = ft_strlen(argv[1]);
	printf("%d", rep);
	return (0);
}*/
