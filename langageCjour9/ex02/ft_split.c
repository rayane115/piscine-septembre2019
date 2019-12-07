/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <rayane.qouchich@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:34:57 by rqouchic          #+#    #+#             */
/*   Updated: 2019/11/09 14:34:00 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (c != charset[i] && charset[i] != '\0')
		i++;
	if (charset[i] != '\0')
		return (0);
	return (1);
}

int		ft_taillem(char *str, int i, char *charset)
{
	int	j;

	j = 0;
	while (ft_charset(str[i], charset) && str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

int		ft_nbr_mot(char *str, char *charset)
{
	int i;
	int nbr_mot;

	i = 0;
	nbr_mot = 0;
	while (str[i] && charset[0])
	{
		while (ft_charset(str[i], charset) == 0)
			i++;
		if (str[i])
			nbr_mot++;
		while (ft_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
	}
	if (!(charset[0]))
		return (1);
	return (nbr_mot);
}

char	**ft_split(char *str, char *charset)
{
	int		is;
	int		i;
	int		j;
	char	**ptr;

	is = 0;
	i = 0;
	if (!(ptr = malloc(sizeof(char*) * (ft_nbr_mot(str, charset) + 1))))
		return (0);
	while (i < ft_nbr_mot(str, charset) && str[0] != '\0')
	{
		j = 0;
		while (ft_charset(str[is], charset) == 0 && str[is])
			is++;
		if (!(ptr[i] = malloc(sizeof(char) * ft_taillem(str, is, charset) + 1)))
			return (0);
		while (ft_charset(str[is], charset) == 1 && str[is])
			ptr[i][j++] = str[is++];
		ptr[i][j] = '\0';
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

int main(void)
{
	char *ptr;

	ptr = strdup("salut comment tu vas");

	printf("%s\n", ft_split(ptr,"m"));
	return (0);
}
