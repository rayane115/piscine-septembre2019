/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 11:10:16 by rqouchic          #+#    #+#             */
/*   Updated: 2019/08/28 20:27:29 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c)
{
	ft_write(a);
	ft_write(b);
	ft_write(c);
}

void	ft_symbole(char *ptr)
{
	ft_write(',');
	ft_write(' ');
	*ptr = *ptr + 1;
}

void	ft_declaration(char *ptr)
{
	ptr[0] = '0';
	ptr[1] = '1';
	ptr[2] = '2';
}

void	ft_print_comb(void)
{
	char tab[3];

	ft_declaration(tab);
	while (tab[1] != tab[2])
	{
		while (tab[2] < ':')
		{
			ft_print(tab[0], tab[1], tab[2]);
			if (tab[0] == '7' && tab[1] == '8' && tab[2] == '9')
				return ;
			ft_symbole(&tab[2]);
			while (tab[2] == ':')
			{
				tab[1]++;
				tab[2] = tab[1] + 1;
			}
			while (tab[1] == ':')
			{
				tab[0]++;
				tab[1] = tab[0] + 1;
				tab[2] = tab[1] + 1;
			}
		}
	}
}
