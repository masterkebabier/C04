/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaunky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 21:25:53 by ajaunky           #+#    #+#             */
/*   Updated: 2026/09/24 21:35:18 by ajaunky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	rep;

	rep = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power != 0)
	{
		rep = rep * nb;
		power = power - 1;
	}
	return (rep);
}
