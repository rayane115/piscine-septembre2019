/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:45:18 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/15 20:32:36 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		j;
	char	*ptr;

	j = 0;
	while (tab[j + 1])
	{
		if ((*cmp)(tab[j], tab[j + 1]) > 0)
		{
			ptr = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = ptr;
			j = 0;
		}
		else
			j++;
	}
}
