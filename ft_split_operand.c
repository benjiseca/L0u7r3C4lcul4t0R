/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_operand.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutartr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 01:10:22 by cdutartr          #+#    #+#             */
/*   Updated: 2017/08/20 01:42:42 by cdutartr         ###   ########.fr       */
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
			count++;
			str++;
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
		return (1);
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
		ptr[i + 1] = '\0';
		return (ptr);
	}
	while (*str && ft_isnot_operand(*str))
	{
		ptr[i] = *str;
		str++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split_operand(char *str)
{
	int		i;
	int		length;
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

int main(int argc, char **argv)
{
	int i;
	char **str;

	i = 0;
	//printf("%s\n", ft_get_word(argv[1], 3));
	str = ft_split_operand(argv[1]);
	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	return 0;
}
