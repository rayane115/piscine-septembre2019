/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:01:08 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/15 19:59:52 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}

void	ft_sort_string_tab(char **tab)
{
	int		j;

	j = 0;
	while (tab[j + 1])
	{
		if (ft_strcmp(tab[j], tab[j + 1]) > 0)
		{
			ft_swap(&tab[j], &tab[j + 1]);
			j = 0;
		}
		else
			j++;
	}
	tab[j + 1] = 0;
}
