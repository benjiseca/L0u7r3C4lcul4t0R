/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transpolonais.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 18:36:21 by mgaspa            #+#    #+#             */
/*   Updated: 2017/08/20 19:18:29 by mgaspa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_priority(char c)
{
	if (c == '*' || c == '/' || c == '%')
		return (2);
	if (c == '(')
		return (42);
	return (1);
}

char **ft_transpolonais(char **str)
{
	char	pile[150];
	char	**sortie;
	int		i;
	int		j;
	int		countpile;

	countpile = 0;
	i= 0;
	j = 0;

	sortie = str;
	while (str[i][0] != '\0')
	{
		if((str[i][0] == '-' || str[i][0] == '+' || str[i][0] == '*' ||
					str[i][0] == '/' || str[i][0] == '%') && str[i][1] == '\0')
		{
			while (ft_priority(pile[countpile-1]) >= ft_priority(str[i][0]))
			{
				sortie[j][0] = pile[countpile];
				countpile--;
			}
			pile[countpile] = str[i][0];
			countpile++;
		}
		else if(str[i][0] == '(')
		{
			pile[countpile] = '(';
		}
		else if(str[i][0] == ')')
		{
			while (pile[countpile] != '(')
			{
				sortie[j][0] = pile[countpile];
				j++;
				countpile--;
			}
			countpile--;
		}
		else
		{
			sortie[j] = str[i];
			j++;
		}
		i++;
	}
write(1, "test\n", 5);
//	while (countpile > 1)
//	{
//		sortie[j][0] = pile[countpile];
//		countpile--;
//		j++;
//	}

	return sortie;
}
