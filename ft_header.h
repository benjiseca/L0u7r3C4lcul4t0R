/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgaspa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 15:01:33 by mgaspa            #+#    #+#             */
/*   Updated: 2017/08/20 19:04:42 by mgaspa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		eval_expr(char *str);
int		ft_strlen(char *str);
char	*ft_tout_colle(char *str);
float		ft_operations(char sign, float nb1,float nb2);
float		ft_calc_polonais(char **str);
char	**ft_split_operand(char *str);
int		ft_is_operand(char c);
int		ft_isnot_operand(char c);
char	**ft_transpolonais(char **str);
#endif
