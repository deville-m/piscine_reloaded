/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 18:59:40 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/23 19:07:59 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

Test(test_ft_strdup, normal)
{
	char *a;
	char *b;

	a = ft_strdup("Salut");
	b = ft_strdup("");
	cr_assert_str_eq(a, "Salut");
	cr_assert_str_eq(b, "");
	free(a);
	free(b);
}
