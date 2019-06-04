/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:09:07 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/27 14:49:58 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char *str = "http://www.tutorialspoint.com";
	const char ch = '\0';
	char *ret;

	ret = strchr(str, ch);

	printf("%c, %s", ch, ret);
	return (0);
}
