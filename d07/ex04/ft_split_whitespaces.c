/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 19:54:59 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/20 19:55:01 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		word_counter(char *str)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= ' ')
		{
			if (str[i - 1] > ' ')
			{
				words++;
			}
		}
		i++;
	}
	words++;
	return (words);
}

char	*char_count(char *str, int *index)
{
	char	*word;
	int		i;
	int		start;
	int		end;

	i = *index;
	while (str[i] <= ' ')
		i++;
	start = i;
	while (str[i] > ' ')
		i++;
	end = i;
	*index = i;
	word = (char*)malloc(sizeof(char) * end - start);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		k;
	int		i;

	array = (char**)malloc(sizeof(char*) * word_counter(str) + 1);
	k = 0;
	i = 0;
	while (k < word_counter(str + 1))
	{
		array[k] = char_count(str, &i);
		k++;
	}
	array[k] = 0;
	return (array);
}

int main()
{
	char **c;
	char b[] = "Hello this    is	crazy";
	int i;

	i = 0;
	c = ft_split_whitespaces(b);
	while (c[i] != 0)
	{
		ft_putstr(c[i]);
		i++;
	}
}