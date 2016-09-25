/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 14:41:17 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/31 15:43:07 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

int		ft_strcmp(char *s1, char *s2);

char	position00(int col, int row, int w, int h);

char	*rush00(int w, int h);

char	position01(int col, int row, int w, int h);

char	*rush01(int w, int h);

char	position02(int col, int row, int w, int h);

char	*rush02(int w, int h);

char	position03(int col, int row, int w, int h);

char	*rush03(int w, int h);

char	position04(int col, int row, int w, int h);

char	*rush04(int w, int h);

#endif
