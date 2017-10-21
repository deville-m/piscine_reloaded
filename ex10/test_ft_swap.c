/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 14:48:49 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/21 15:48:54 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

void	ft_swap(int *a, int *b);

Test(test_ft_swap, value_swapped)
{
	int a;
	int b;

	a = 0;
	b = 42;
	ft_swap(&a, &b);
	cr_assert_eq(a, 42, "a = %d", a);
	cr_assert_eq(b, 0, "b = %d", b);
}

Test(test_ft_swap, null_pointer)
{
	int a;
	int b;


	a = 0;
	b = 42;
	ft_swap(NULL, &b);
	cr_assert_eq(a, 0, "a = %d", a);
	cr_assert_eq(b, 42, "b = %d", b);
}
