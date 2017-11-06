/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 17:01:33 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/23 18:01:32 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		printf("String no.%d:\nResult printf=%s\n", i, argv[i]);

		ft_putstr("Result ft_putstr=");
		ft_putstr(argv[i++]);

		printf("\n\n");
	}
	return (0);
}
