/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 10:14:54 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/03 13:54:37 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int j;

	j = 2;
	if (nb <= 1)
		return (0);
	while (j <= nb / j)
	{
		if (nb % j == 0)
			return (0);
		j++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
	}
}
