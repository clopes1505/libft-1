/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:59:02 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 08:43:56 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	const char *str;
	int			i;
	int			j;

	i = 0;
	j = ft_strlen(s);
	str = (const char*) malloc(j);
	if (s == NULL || f == NULL)
		return ;
	while (s != NULL && s)
	{
		f(s[i]) = f(str[i]);
		i++;
	}
	return (f(str));
}
*/
