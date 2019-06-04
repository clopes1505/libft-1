/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:04:25 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 10:05:29 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsplit(char const *s, char c)
{
	char **res;
	char *tmp;
	char *last_delim;
	unsigned int i;
	unsigned int j;

	res =		 0;
	tmp = 		 (char *)s;
	last delim = 0;
	i =			 0;
	j =			 0;	
	while (str2[i] != '\0' && i != 0)
	{
		if (str2[i] == c)
		
//		str[j] = str2[i];
		i++;
//		j++;
	}
	return(str2);
}

int	main(void)
{
	const char *str = "*Hello*Fellow***Students";
	char c = '*';
	char *str2;

	str2 = ft_strsplit(str, c);
	printf("%s", str2);
}
