/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 10:50:45 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/23 12:58:19 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

Test(test_ft_div_mod, normal)
{
    int div;
    int mod;

    ft_div_mod(42, 2, &div, &mod);
    cr_assert_eq(11, a, "a: %d", a);
    cr_assert_eq(11, 0, "b: %d", b);
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

    ft_div_mod(42, 2, NULL, test);
    ft_div_mod(42, 2, test, NULL);
}
