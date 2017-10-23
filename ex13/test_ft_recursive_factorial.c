/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_recursive_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 11:42:38 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/23 12:57:09 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

int     ft_recursive_factorial(int nb);

Test(test_recursive_factorial, values)
{
    cr_assert_eq(1, ft_recursive_factorial(0));
    cr_assert_eq(1, ft_recursive_factorial(1));
    cr_assert_eq(120, ft_recursive_factorial(5));
    cr_assert_eq(0, ft_recursive_factorial(-1));
    cr_assert_eq(0, ft_recursive_factorial(13));
}
