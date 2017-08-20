/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 22:59:37 by mgaspa            #+#    #+#             */
/*   Updated: 2017/08/20 19:13:44 by mgaspa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int nb, char **str)
{
	char **tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (nb !=2)
		return 0;
//	(void)str;
	tab = ft_transpolonais(ft_split_operand(ft_tout_colle(str[1])));
//
//
	
//	tab = (char**)malloc(sizeof(char)* 6);
//
//	tab[0] = (char*)malloc(sizeof(char)*2);
//	tab[1] = (char*)malloc(sizeof(char)*2);
//	tab[2] = (char*)malloc(sizeof(char)*2);
//	tab[3] = (char*)malloc(sizeof(char)*2);
//	tab[4] = (char*)malloc(sizeof(char)*2);
//	tab[5] = (char*)malloc(sizeof(char)*2);
//	tab[6] = (char*)malloc(sizeof(char)*2);
//	tab[7] = (char*)malloc(sizeof(char)*2);
//	tab[8] = (char*)malloc(sizeof(char)*2);
//	tab[9] = (char*)malloc(sizeof(char)*2);
//	tab[10] = (char*)malloc(sizeof(char)*2);
//	tab[12] = (char*)malloc(sizeof(char)*2);
//	tab[13] = (char*)malloc(sizeof(char)*2);
//	tab[14] = (char*)malloc(sizeof(char)*2);
//	tab[15] = (char*)malloc(sizeof(char)*2);
//	tab[0] = "5";
//	tab[1] = "2";
//	tab[2] = "/";
//	tab[3] = "2";
//	tab[4] = "*";
//	tab[5] = "\0";
//	tab[6] = "3";
//	tab[7] = "*";
//	tab[8] = "-";
//	tab[9] = "2";
//	tab[10] = "5";
//	tab[11] = "*";
//	tab[12] = "3";
//	tab[13] = "+";
//	tab[14] = "-";
//	tab[15] = "\0";
	

	while(tab[i][0] != '\0')
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
write(1, "test\n",5);
	ft_putnbr(ft_calc_polonais(tab));

	while(tab[i][0] != '\0')
	{
		free(tab[i]);
		i++;
	}
	return 0;
}
