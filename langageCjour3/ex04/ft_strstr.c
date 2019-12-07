/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:20:48 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/01 09:20:34 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (!to_find[0])
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i])
			i++;
		if (!to_find[i])
			return (str);
		str++;
	}
	return (0);
}
