/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:55:39 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/14 19:58:23 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n < 0)
	{
		ft_write('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_write((n % 10) + '0');
}
