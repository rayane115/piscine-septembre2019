/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:36:45 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/15 19:54:06 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length == 0 || length == 1)
		return (1);
	while (i < length - 1 && (*f)(tab[i], tab[i + 1]) <= 0)
		i++;
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < length - 1 && (*f)(tab[i], tab[i + 1]) >= 0)
		i++;
	if (i == length - 1)
		return (1);
	return (0);
}
