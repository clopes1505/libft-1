/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 06:23:17 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/05 10:25:22 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *ptr;
	
	ptr = (char*)haystack;	
	if (ft_strlen(haystack) == 0 || ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	if (ft_strlen(needle) == 0)
		return (ptr);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if ((i + j) == len)
				break ;
			if (needle[j + 1] == '\0')
			{
				ptr = (char*)haystack + i;
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
