/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 18:02:43 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/23 18:21:26 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <string.h>

int		ft_strlen(char *str);

Test(test_ft_strlen, normal)
{
	cr_assert_eq(strlen("Salut"), ft_strlen("Salut"));
	cr_assert_eq(strlen(""), ft_strlen(""));
}
