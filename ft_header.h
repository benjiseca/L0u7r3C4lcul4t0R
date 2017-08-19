/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 15:01:33 by mgaspa            #+#    #+#             */
/*   Updated: 2017/08/19 22:52:15 by cdutartr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		eval_expr(char *str);
char	*ft_tout_colle(char *str);
int		ft_is_operand(char c);
int		ft_isnot_operand(char c);
#endif
