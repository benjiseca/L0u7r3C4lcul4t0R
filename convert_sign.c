/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_sign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutartr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 21:02:02 by cdutartr          #+#    #+#             */
/*   Updated: 2017/08/19 21:08:34 by cdutartr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_operations(char *sign, int nb1, int nb2)
{
	if (*sign == '-')
		return (nb1 - nb2);
	if (*sign == '+')
		return (nb1 + nb2);
	if (*sign == '*')
		return (nb1 * nb2);
	if (*sign == '%')
		return (nb1 % nb2);
	if (*sign == '/')
		return (nb1 / nb2);
	return (0);
}
