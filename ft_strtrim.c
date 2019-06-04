/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 07:48:45 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/04 16:22:17 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *str;
	unsigned int i;
	unsigned int j;
	unsigned int istore;

	str = (char *)malloc(ft_strlen(s));
	i = ft_strlen(s);
	j = 0;
	if (s == NULL)
		return (NULL);
	i = i - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	istore = i;
	istore = istore + 1;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;

	while (i < istore && s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return(str);
}
