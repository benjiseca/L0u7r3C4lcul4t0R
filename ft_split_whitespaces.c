/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmasi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 08:59:30 by bmasi             #+#    #+#             */
/*   Updated: 2017/08/19 19:03:28 by bmasi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_find_next(char *str, int z);
char	**ft_final(char **dest, int x);

int		ft_count_word(char *str)
{
	int		count;
	int		x;

	x = 0;
	count = 0;
	while (str[x] != '\0')
	{
		while ((str[x] != '\0') && (str[x] == '\t' || str[x] == '\n' ||
				str[x] == ' '))
			x++;
		count++;
		while (str[x] != '\0' && str[x] != '\t' && str[x] !=
			'\n' && str[x] != ' ')
			x++;
	}
	return (count);
}

int		ft_count_char(char *str, int z)
{
	int		y;

	y = 0;
	while (str[z] != '\0' && str[z] != '\t' && str[z] != '\n' && str[z] != ' ')
	{
		y++;
		z++;
	}
	return (y);
}

char	**ft_split_whitespaces(char *str)
{
	char	**dest;
	int		x;
	int		z;
	int		y;
	int		number_char;

	x = 0;
	z = 0;
	dest = (char**)malloc(sizeof(char*) * (ft_count_word(str) + 1));
	while (str[z] != '\0' && x < ft_count_word(str))
	{
		z = ft_find_next(str, z);
		number_char = ft_count_char(str, z);
		dest[x] = (char*)malloc(sizeof(char) * (number_char - 1));
		y = 0;
		while (y < (number_char) && str[z] != '\0')
		{
			dest[x][y] = str[z];
			y++;
			z++;
		}
		dest[x][y] = '\0';
		x++;
	}
	return (ft_final(dest, x));
}

int		ft_find_next(char *str, int z)
{
	while (str[z] != '\0' && (str[z] == '\t' || str[z] == '\n' ||
		str[z] == ' '))
		z++;
	return (z);
}

char	**ft_final(char **dest, int x)
{
	dest[x] = 0;
	return (dest);
}
