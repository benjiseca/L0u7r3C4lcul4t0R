/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 22:00:28 by mgaspa            #+#    #+#             */
/*   Updated: 2017/08/20 23:06:34 by mgaspa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*suppr_spaces(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = malloc(ft_strlen(str) + 1);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j = j + 1;
		}
		i = i + 1;
	}
	str2[j] = '\0';
	return (str2);
}

float	ft_parse_nbr(char **ps)
{
	float	nbr;
	float	signe;

	nbr = 0;
	signe = 1;
	if ((*ps)[0] == '+' || (*ps)[0] == '-')
	{
		if ((*ps)[0] == '-')
			signe = -1;
		*ps = *ps + 1;
	}
	if ((*ps)[0] == '(')
	{
		*ps = *ps + 1;
		nbr = eval_expr_moins_de_ligne(ps);
		if ((*ps)[0] == ')')
			*ps = *ps + 1;
		return (signe * nbr);
	}
	while ('0' <= (*ps)[0] && (*ps)[0] <= '9')
	{
		nbr = (nbr * 10) + (*ps)[0] - '0';
		*ps = *ps + 1;
	}
	return (signe * nbr);
}

float	eval_expr_moins_de_ligne(char **ps)
{
	float	lhs;
	float	rhs;
	char	op;

	lhs = ft_parse_nbr(ps);
	while ((*ps)[0] != '\0' && (*ps)[0] != ')')
	{
		op = (*ps)[0];
		*ps = *ps + 1;
		if (op == '+' || op == '-')
			rhs = eval_expr_encore_moins(ps);
		else
			rhs = ft_parse_nbr(ps);
		lhs = ft_do_op(lhs, rhs, op);
	}
	return (lhs);
}

float	eval_expr_encore_moins(char **ps)
{
	float	lhs;
	float	rhs;
	char	op;

	lhs = ft_parse_nbr(ps);
	while ((*ps)[0] == '*' || (*ps)[0] == '/' || (*ps)[0] == '%')
	{
		op = (*ps)[0];
		*ps = *ps + 1;
		rhs = ft_parse_nbr(ps);
		lhs = ft_do_op(lhs, rhs, op);
	}
	return (lhs);
}

int		eval_expr(char *str)
{
	float	i;

	str = suppr_spaces(str);
	if (str[0] == '\0')
		return (0);
	i = eval_expr_moins_de_ligne(&str);
	if (i > 0)
	{
		i = i + 0.5;
	}
	else if (i < 0)
		i = i - 0.5;
	return (i);
}
