/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:52:08 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/27 08:44:45 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	char *ptr;
	
	ptr = (char*)haystack;
	if (ft_strlen(needle) == 0)
		return (ptr);
	i = 0;
	while (haystack[i] != '\0')
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
	char *str = "c";
	const char *str2 = "ice";
	char *str3;

	str3 = strstr(str, str2);
	printf("%s\n\n", str3);

	char *s = "c";
	const char *s2 = "ice";
	char *s3;

	s3 = ft_strstr(s, s2);
	printf("%s", s3);
}
