/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:45:47 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/04 16:07:42 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int i;
	unsigned int j;
	
	i = 0;
	j = ft_strlen(s);
	str = (char*) malloc(j * sizeof(char *));
	if (s == NULL || f == NULL)
		return (NULL);
	while (s != NULL && s[i])
	{
		str[i] = s[i];
		str[i] = f(i, s[i]);
		i++;
	}
	return(str);
}

