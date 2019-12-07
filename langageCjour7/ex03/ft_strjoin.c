/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:45:14 by rqouchic          #+#    #+#             */
/*   Updated: 2019/09/09 19:34:13 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		i;
	int		k;
	char	*str;

	i = 1;
	j = 0;
	k = 0;
	while (strs[j])
		i = i + ft_strlen(strs[j++]);
	str = malloc(sizeof(char) * (i + (ft_strlen(sep) * size - 1)));
	j = 0;
	while (strs[j])
	{
		i = 0;
		while (strs[j][i])
			str[k++] = strs[j][i++];
		j++;
		i = 0;
		if (j < size )
			while (sep[i])
				str[k++] = sep[i++];
	}
	str[k] = '\0';
	return (str);
}

int main(int ac, char **av)
{	
	char *str = ft_strjoin(ac, av, "++");
   printf("%s\n", str);	
	return (0);
}
