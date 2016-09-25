/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:36:41 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/23 13:36:44 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN(x) !(x % 2)
# define EVEN_MSG "I have an even number of arguements.\n"
# define ODD_MSG "I have an odd number of arguements.\n"
# define SUCCESS 0

typedef int	t_bool;

#endif
