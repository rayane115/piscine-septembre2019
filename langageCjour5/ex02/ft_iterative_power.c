/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 14:44:38 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/04 17:38:33 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_iterative_power(int nb, int power)
{
	int i;
	int copy;

	i = 1;
	if ((nb == 0 && power) != 0 || power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	copy = nb;
	while (i < power)
	{
		nb = copy * nb;
		i++;
	}
	return (nb);
}

int		main(void)
{
	printf("%d", ft_iterative_power(3, 4));
	return (0);
}
