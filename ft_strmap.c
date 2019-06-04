/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:59:02 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/04 16:07:53 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	int			i;
	int			j;

	i = 0;
	j = ft_strlen(s);
	str = (char*) malloc(j * sizeof(char *));
	if (s == NULL || f == NULL)
		return (NULL);
	while (s != NULL && s[i] != '\0')
	{
		str[i] = s[i];
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}

