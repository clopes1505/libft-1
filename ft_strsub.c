/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 06:39:24 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 07:14:05 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	str = (char *)malloc(len);
	if (s ==  NULL)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (NULL);
	while (i < start)
		i++;
	while (j < len && s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}

int	main(void)
{
	char *res;
	char const *str = "Hello, World";
	unsigned int start = 3;
	size_t len = 8;

	res = ft_strsub(str, start, len);
	printf("%s", res);
}
