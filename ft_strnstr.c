/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 06:23:17 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/27 14:51:42 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"
/*
int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
*/
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

int	main(void)
{
	char *str = "ice";
	const char *str2 = "";
	char *str3;

	str3 = strnstr(str, str2, 7);
	printf("%s\n\n", str3);

/*---------------------ft--------------------*/

	char *s = "ice";
	const char *s2 = "";
	char *s3;

	s3 = ft_strnstr(s, s2, 7);
	printf("%s\n", s3);
}
