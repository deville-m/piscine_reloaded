/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_print_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 13:29:43 by mdeville          #+#    #+#             */
/*   Updated: 2017/10/23 14:09:38 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stdio.h>

void    ft_print_alphabet(void);

Test(test_ft_print_alphabet, output)
{
    FILE *test;
    
    test = freopen("test", "w+", 1);
    if (test)
    {
        ft_print_alphabet();
        rewind(test);
        cr_assert_file_contents_eq_str(test, "abcdefghijklmnopqrstuvwxyz");
        fclose(test);
        remove("test");
    }
}
