/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:06:12 by egomez-a          #+#    #+#             */
/*   Updated: 2021/04/20 17:00:39 by egomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_verify(char *s, char c, int pos)
{
	int i;
	
	i = 0;
	while (i < pos && s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	int i;
	
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!(ft_verify(argv[1], argv[1][i], i)))
				write(1, &argv[1][i], 1);
			i++;	
		}
		i = 0;
		while (argv[2][i])
		{
			if (!(ft_verify(argv[2], argv[2][i], i)) && !(ft_verify(argv[1], argv[2][i], 10000)))
					write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}