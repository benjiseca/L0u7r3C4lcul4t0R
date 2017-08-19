/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tout_colle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:32:50 by mgaspa            #+#    #+#             */
/*   Updated: 2017/08/19 21:34:28 by mgaspa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_tout_colle(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = (char*)malloc(sizeof(char)* (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j++;
		}
		i++;
	}
	str2[j] = '\0';
	return (str2);
}
