/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cb_polonais.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 21:49:04 by mgaspa            #+#    #+#             */
/*   Updated: 2017/08/20 18:36:07 by mgaspa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

float ft_calc_polonais(char **str)
{
	int	i;
	int	j;
	float first[150000];
	int count;

	count = 0;
	i = 0;
	j = -1;
	while (str[i][0] != '\0')
	{
		if (str[i][0] == '+' || str[i][0] == '-' || str[i][0] == '*' || str[i][0] == '/' || str[i][0] == '%')
		{
			first[j - 1] =ft_operations(str[i][0], first[j - 1], first[j]);
			j--;
		}
		else 
		{
			j++;
			first[j] = (float)ft_atoi(str[i]);
		}
		i++;
	}
	return (first[j]);
}
