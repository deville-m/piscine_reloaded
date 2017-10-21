/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 01:25:32 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/21 02:04:28 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	if (!str)
		return ;

	while (*str)
		ft_putchar(*str++);
}

void	ft_print_params(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i++]);
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = ac - 1;
	while (i >= 1)
	{
		j = 0;
		while (j <= i - 1)
		{
			if (ft_strcmp(av[j + 1], av[j]) < 0)
			{
				tmp = av[j + 1];
				av[j + 1] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		i--;
	}
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);

	ft_sort_params(argc - 1, argv + 1);
	ft_print_params(argc, argv);
	return (0);
}
