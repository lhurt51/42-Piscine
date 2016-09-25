/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_main.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 20:51:23 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/24 20:51:27 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_MAIN_H
# define SUDOKU_MAIN_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_print_puzzle(int **puzzle);

int		is_available(int **puzzle, int row, int col, int num);

int		build_board(int **puzzle, int row, int col);

#endif
