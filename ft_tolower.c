/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:04:39 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/13 16:25:28 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int     main(void)
{
        char    var1;
        char    var2;
        char    var3;

        var1 = 'm';
        var2 = 'D';
        var3 = '9';

        printf("tolower %c -> %c\n", var1, tolower(var1));
        printf("ft_lower %c -> %c\n", var1, ft_tolower(var1));

        printf("tolower %c -> %c\n", var2, tolower(var2));
        printf("ft_tolower %c -> %c\n", var2, ft_tolower(var2));

        printf("tolower %c -> %c\n", var3, tolower(var3));
        printf("ft_tolower %c -> %c\n", var3, ft_tolower(var3));

        return (0);
} */
