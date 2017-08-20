/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_operand.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 02:32:05 by mgaspa            #+#    #+#             */
/*   Updated: 2017/08/20 16:37:10 by mgaspa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_header.h"

int		ft_count_benji(char *str)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (*str)
	{
		while (*str && ft_is_operand(*str))
		{
			if (ft_is_operand(*(str - 1)) && *str != '(' && *str != ')')
				str++;
			else
			{
				count++;
				str++;
			}
		}
		if (*str)
			count2++;
		while (*str && ft_isnot_operand(*str))
		{
			str++;
		}
	}
	return (count + count2);
}

int		ft_word_length(char *str)
{
	int		count;

	count = 0;
	if (ft_is_operand(*str))
	{
		if (ft_is_operand(*(str - 1)) && *str != '(' && *str != ')')
		{
			count++;
			str++;
		}
		else
			return (1);
	}
	while (*str && ft_isnot_operand(*str))
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_get_word(char *str, int length)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (length + 1));
	if (ft_is_operand(*str))
	{
		ptr[i] = *str;
		if (ft_is_operand(*(str - 1)) && *str != '(' && *str != ')')
		{
			i++;
			str++;
		}
		else
		{
			ptr[i + 1] = '\0';
			return (ptr);
		}
	}
	while (*str && ft_isnot_operand(*str))
		ptr[i++] = *str++;
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split_operand(char *str)
{
	int		i;
	int		time;
	char	**tab;

	i = 0;
	time = ft_count_benji(str);
	tab = (char **)malloc(sizeof(char*) * (ft_count_benji(str) + 1));
	while (i < time)
	{
		tab[i] = (char*)malloc(ft_word_length(str));
		tab[i] = ft_get_word(str, ft_word_length(str));
		str += ft_word_length(str);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
