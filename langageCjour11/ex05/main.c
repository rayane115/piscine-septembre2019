/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:41:34 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/17 21:02:02 by rqouchic         ###   ########.fr       */
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

int		ft_atoi(char *str)
{
	int i;
	int n;
	int signe;

	i = 0;
	n = 0;
	signe = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signe++;
			i++;
		}
		if (str[i] == '+')
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + str[i++] - '0';
	if (signe % 2 != 0)
		return (-n);
	return (n);
}

void	do_op(int ac, char **av)
{
	if (*av[2] == '*')
		ft_putnbr(ft_atoi(av[1]) * ft_atoi(av[3]));
	else if (*av[2] == '-')
		ft_putnbr(ft_atoi(av[1]) - ft_atoi(av[3]));
	else if (*av[2] == '+')
		ft_putnbr(ft_atoi(av[1]) + ft_atoi(av[3]));
	else if (*av[2] == '/')
		ft_putnbr(ft_atoi(av[1]) / ft_atoi(av[3]));
	else if (*av[2] == '%')
		ft_putnbr(ft_atoi(av[1]) % ft_atoi(av[3]));
	ft_write('\n');
}

int		main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	else if (ac != 4)
		return (0);
	else if (av[2][0] == '/' && av[2][1] == '\0' && av[3][0] == '0')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (av[2][0] == '%' && av[2][1] == '\0' && av[3][0] == '0')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	else if (av[2][1] != '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	else if (av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '*' &&
			av[2][0] != '/' && av[2][0] != '%')
		write(1, "0\n", 1);
	do_op(ac, av);
	return (0);
}
