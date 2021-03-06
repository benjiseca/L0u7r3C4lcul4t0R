/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 21:59:48 by mgaspa            #+#    #+#             */
/*   Updated: 2017/08/20 22:45:10 by mgaspa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <unistd.h>

char	*suppr_spaces(char *str);
float	ft_parse_nbr(char **ps);
float	eval_expr_moins_de_ligne(char **ps);
float	eval_expr_encore_moins(char **ps);
int		eval_expr(char *str);
float	ft_do_op(float nb1, float nb2, char op);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);
#endif
