/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:00:42 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/14 11:20:25 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 'I';

	if (ft_isalpha(c) == 0)
	{
		printf("%c is not an alphabet.", c);
	}
	else
	{
		printf("%c is an alphabet.", c);
	}
	return (0);
} */
