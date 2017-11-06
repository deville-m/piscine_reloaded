/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 15:51:31 by mdeville          #+#    #+#             */
/*   Updated: 2017/11/06 14:40:14 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

void	ft_ft(int *nb);

Test(test_ft_ft, value)
{
	int test_value;

	ft_ft(&test_value);
	cr_assert_eq(test_value, 42, "nb: %d", 42);
}
