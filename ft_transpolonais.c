/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transpolonais.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfavier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 23:03:45 by kfavier           #+#    #+#             */
/*   Updated: 2017/08/20 18:41:39 by cdutartr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_header.h"

char **ft_transpolonais(char **tab)
{
	int		i;
	int		j;
	int		k;
	char	**sortie;
	char	**stack;

	i = 0;
	j = 0;
	k = 0;
	stack = (char**)malloc(sizeof(char*) * 100);
	sortie = (char**)malloc(sizeof(char*) * 1000);
	
	while (tab[i])
	{
		if (tab[i] && ft_isnot_operand(tab[i][0]))
		{
			sortie[j] = tab[i];
			i++;
			j++;
		}
		else if (tab[i] && ft_is_operand(tab[i][0]))
		{
		 if (tab[i][0] == '+' || tab[i][0] == '-')
			{
					sortie[j] = stack[k];
					stack[k] = tab[i];
					j++;
					i++;
			}
		 else if (tab[i][0] == '*' || tab[i][0] == '/')
		 {
			if (stack[k][0] == '+' || stack[k][0] == '-')
			{
				k++;
				stack[k] = tab[i];
				i++;
			}
			else if (stack[k][0] == '*' || stack[k][0] == '/' ||
					stack[k][0] == '(')
			{
				sortie[j] = stack[k];
				stack[k] = tab[i];
				j++;
				i++;
			}
		 }
//		 else if (tab[i][0] == '(')
//		 {
//			 
//		 }
		}
	}
	sortie[j] = 0;
	i = 0;
	while (sortie[i])
	{
		printf("%s\n", sortie[i]);
		i++;
	}
	return (sortie);
}

int main(int args, char **argv)
{
	int i;
	char **tab;

	i = 0;
	tab = ft_split_operand(argv[1]);
	ft_transpolonais(tab);
}
