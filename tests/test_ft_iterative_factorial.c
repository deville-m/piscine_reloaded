/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_iterative_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 11:03:44 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/23 12:56:25 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

int     ft_iterative_factorial(int nb);

Test(test_iterative_factorial, values)
{
    cr_assert_eq(1, ft_iterative_factorial(0));
    cr_assert_eq(1, ft_iterative_factorial(1));
    cr_assert_eq(120, ft_iterative_factorial(5));
    cr_assert_eq(0, ft_iterative_factorial(-1));
    cr_assert_eq(0, ft_iterative_factorial(13));
}
