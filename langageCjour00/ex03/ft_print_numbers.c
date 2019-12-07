/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 20:32:40 by rqouchic          #+#    #+#             */
/*   Updated: 2019/08/27 23:32:06 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int chiffre;

	chiffre = '0';
	while (chiffre <= '9')
	{
		ft_write(chiffre);
		chiffre++;
	}
}
