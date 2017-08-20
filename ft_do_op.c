/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 21:38:51 by mgaspa            #+#    #+#             */
/*   Updated: 2017/08/20 22:44:40 by mgaspa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

float	ft_do_op(float nb1, float nb2, char op)
{
	if (op == '+')
		return (nb1 + nb2);
	if (op == '-')
		return (nb1 - nb2);
	if (op == '*')
		return (nb1 * nb2);
	if (nb1 - (int)nb1 == 0 && nb2 - (int)nb2 == 0)
		if (op == '%')
			return ((int)nb1 % (int)nb2);
	if (op == '/')
		return (nb1 / nb2);
	return (0);
}
