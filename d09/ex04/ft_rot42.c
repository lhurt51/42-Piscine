/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 21:22:21 by lhurt             #+#    #+#             */
/*   Updated: 2016/07/21 21:22:22 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	checkupper(char *str, int i)
{
	if (str[i] >= 'K' && str[i] <= 'Z')
	{
		str[i] -= 10;
	}
	else if (str[i] >= 'A' && str[i] <= 'J')
	{
		str[i] += 16;
	}
}

void	checklower(char *str, int i)
{
	if (str[i] >= 'k' && str[i] <= 'z')
	{
		str[i] -= 10;
	}
	else if (str[i] >= 'a' && str[i] <= 'j')
	{
		str[i] += 16;
	}
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 'a' && str[i] < 'z')
		{
			checklower(str, i);
		}
		else if (str[i] > 'A' && str[i] < 'Z')
		{
			checkupper(str, i);
		}
		i++;
	}
	return (str);
}
