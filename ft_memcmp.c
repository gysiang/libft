/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:29:22 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/12 16:46:22 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*str1_char;
	const unsigned char	*str2_char;
	size_t				i;

	i = 0;
	str1_char = (const unsigned char *)str1;
	str2_char = (const unsigned char *)str2;
	while (i < n)
	{
		if (str1_char[i] > str2_char[i])
		{
			return (1);
		}
		else if (str1_char[i] < str2_char[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[15];
	char	str2[15];
	int	ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);

	ret = memcmp(str1, str2, 5);

	if (ret > 0)
	{
		printf("str2 is less than str1");
	}
	else if (ret < 0)
	{
		printf("str1 is less than str2");
	}
	return (0);
} */
