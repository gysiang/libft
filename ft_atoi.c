/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:12:45 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/19 12:48:25 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_whitespace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		res;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_whitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	// Test ft_atoi function
	printf("Testing ft_atoi function:\n");
	const char *str1 = "+-54";
	const char *str2 = "-+48";
	const char *str3 = "\t\n\r\v\f  469 \n";

	int result1 = ft_atoi(str1);
	int result2 = ft_atoi(str2);
	int result3 = ft_atoi(str3);

	printf("Result 1: %d (Expected: 0)\n", result1);
	printf("Result 2: %d (Expected: 0)\n", result2);
	printf("Result 3: %d (Expected: 469)\n", result3);
} */
