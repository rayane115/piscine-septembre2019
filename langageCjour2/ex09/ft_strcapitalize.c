/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 12:11:33 by rqouchic          #+#    #+#             */
/*   Updated: 2019/08/30 09:36:16 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		si_cest_pas_une_lettre(char c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int		change_en_maj(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int		mettre_tout_en_minuscule(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int vf;

	vf = 1;
	i = 0;
	while (str[i])
	{
		if (mettre_tout_en_minuscule(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (vf == 1 && change_en_maj(str[i]))
			str[i] = str[i] - 32;
		vf = 0;
		if (!si_cest_pas_une_lettre(str[i]))
			vf = 1;
		i++;
	}
	return (str);
}
