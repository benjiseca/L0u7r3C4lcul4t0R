/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_sign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutartr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 21:02:02 by cdutartr          #+#    #+#             */
/*   Updated: 2017/08/20 20:23:08 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_operations(char sign, float nb1, float nb2)
{
	if (sign == '-')
		return (nb1 - nb2);
	if (sign == '+')
		return (nb1 + nb2);
	if (sign == '*')
		return (nb1 * nb2);
	if (nb1 - (int)nb1 == 0 && nb2 - (int)nb2 == 0)
		if (sign == '%')
			return ((int)nb1 % (int)nb2);
	if (sign == '/')
		return (nb1 / nb2);
	return (0);
}
