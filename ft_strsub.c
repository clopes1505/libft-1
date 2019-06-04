/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 06:39:24 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/04 16:22:02 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
