/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transpolonais.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfavier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 23:03:45 by kfavier           #+#    #+#             */
/*   Updated: 2017/08/20 16:42:26 by kfavier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_header.h"

char **ft_transpolonais(char **c)
{
	int		i;
	int		j;
	int		k;
	char	*sortie;
	char	*stack;

	i = 0;
	j = 0;
	k = 1;
	stack = (char*)malloc(10 * sizeof(char));
	sortie = (char*)malloc(sizeof(c));
	stack[0] = "#";
	while (c[i] != '\0')
	{
		if (ft_is_operand(c[i]))
		{
			sortie[j] = c[i];
			j++;
			i++;
		}
		if (c[i] == '(')
		{
			stack[k] = c[i];
			i++;
			k++;
		printf("%s\n", stack[k]);
		}
		if (c[i] == '+' || c[i] == '-')
		{
			if (stack[i - 1] == '(')
			{
				stack[k] = c[i];
				k++;
				i++;
		printf("%s\n", stack[k]);
			}
			else
			{
				sortie[j] = stack[k - 1];
				stack[k - 1] = c[i];
				i++;
				j++;
			}
		}
	}
}

int main(int args, char **argv)
{
	printf("%s", ft_split_operand(argv[1])[1]);
	ft_transpolonais(ft_split_operand(argv[1]));
}
