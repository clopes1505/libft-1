/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:45:47 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 08:44:06 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	const char *str;
	unsigned int i;
	unsigned int j;
	
	i = 0;
	j = ft_strlen(s);
	str = (const char*) malloc(j);
	if (s == NULL || f == NULL)
		return ;
	while (s != NULL && s)
	{
		f(s++, i) = f(str[i]);
		i++;
	}
	return(f(str));
}
*/
