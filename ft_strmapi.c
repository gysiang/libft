/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:09:00 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/20 16:21:28 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char const	*str;
	char		*result;
	size_t		len;
	size_t		i;

	if (!s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	i = 0;
	str = s;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (str[i] != '\0')
	{
		result[i] = (*f)(i, str[i]);
		++i;
	}
	result[i] = '\0';
	return (result);
}
