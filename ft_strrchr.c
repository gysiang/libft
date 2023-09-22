/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:10:42 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/18 15:16:59 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			ret = (char *)&s[i];
		++ i;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (ret);
}
