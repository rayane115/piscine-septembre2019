/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 20:12:33 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/08 13:54:08 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *ptr;

	i = 0;
	if (min >= max)
	{
		ptr = NULL;
		return (0);
	}
	if (!(ptr = (int*)malloc(sizeof(int) * max - min)))
		return (0);
	ptr[i] = min;
	while (ptr[i] != max - 1)
	{
		i++;
		min++;
		ptr[i] = min;
	}
	return (ptr);
}
