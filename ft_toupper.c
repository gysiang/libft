/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:03:46 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/08 10:12:09 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	var1;
	char	var2;
	char	var3;

	var1 = 'm';
	var2 = 'D';
	var3 = '9';

	printf("toupper %c -> %c\n", var1, toupper(var1));
	printf("ft_toupper %c -> %c\n", var1, ft_toupper(var1));

	printf("toupper %c -> %c\n", var2, toupper(var2));
        printf("ft_toupper %c -> %c\n", var2, ft_toupper(var2));

	printf("toupper %c -> %c\n", var3, toupper(var3));
        printf("ft_toupper %c -> %c\n", var3, ft_toupper(var3));

	return (0);
} */
