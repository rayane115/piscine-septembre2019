/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 10:02:39 by julnolle          #+#    #+#             */
/*   Updated: 2019/09/04 10:49:06 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_first_last_line(int x)
{
	int col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		col++;
	}
	ft_putchar('\n');
}

void	print_mid_line(int x)
{
	int col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int line;

	if (x > 0 && y > 0 && x <= 2147483647 && y <= 2147483647)
	{
		line = 1;
		while (line <= y)
		{
			if (line == 1 || line == y)
				print_first_last_line(x);
			else
				print_mid_line(x);
			line++;
		}
	}
}
