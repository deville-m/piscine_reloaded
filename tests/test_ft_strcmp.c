/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 18:22:02 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/23 18:48:07 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

Test(test_ft_strcmp, value)
{
	cr_assert(ft_strcmp("", "") == 0);
	cr_assert(ft_strcmp("Salut", "Salut") == 0);
	cr_assert(ft_strcmp("Slt", "") > 0);
	cr_assert(ft_strcmp("", "Slt") < 0);
	cr_assert(ft_strcmp("Bonjour", "Bonjoua") > 0);
	cr_assert(ft_strcmp("123", "abc") < 0);
}
