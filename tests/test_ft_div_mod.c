/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 10:50:45 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/23 16:59:03 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

Test(test_ft_div_mod, normal)
{
	int div;
	int mod;

	ft_div_mod(42, 2, &div, &mod);
	cr_assert_eq(21, div, "a: %d", div);
	cr_assert_eq(0, mod, "b: %d", mod);
}

Test(test_ft_div_mod, division_by_zero)
{
	int div;
	int mod;

	ft_div_mod(42, 0, &div, &mod);
}

Test(test_ft_div_mod, null_pointer)
{
	int test;

	ft_div_mod(42, 2, NULL, &test);
	ft_div_mod(42, 2, &test, NULL);
}
