/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:17:57 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/06 12:40:00 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	size = max - min + 1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	if (!(*range = (int*)malloc(sizeof(int) * size)))
		return (-1);
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
