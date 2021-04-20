/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:21:07 by egomez-a          #+#    #+#             */
/*   Updated: 2021/04/20 16:04:57 by egomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isfirst(char *s, char c, int pos)
{
	int i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (i == pos)
		return (1);
	return (0);
}

int ft_instring(char *str, char c)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i; 

	if (argc == 3)
	{
		i = 0; 
		while (argv[1][i])
		{
			if ((ft_isfirst(argv[1], argv[1][i], i)) && (ft_instring(argv[2], argv[1][i])))
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}