/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 12:47:24 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/23 12:55:40 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

int     ft_sqrt(int nb);

Test(test_ft_sqrt, value)
{
    cr_assert_eq(11, ft_sqrt(121));
    cr_assert_eq(0, ft_sqrt(-1));
    cr_assert_eq(0, ft_sqrt(0));
    cr_assert_eq(1, ft_sqrt(1));
    cr_assert_eq(0, ft_sqrt(2147483647));
}
