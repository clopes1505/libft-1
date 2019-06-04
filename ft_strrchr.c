/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:18:34 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/23 10:28:45 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
	int i;
 
	i = strlen(str);
	while (i >= 0)
	{
		if(str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}

int	main(void)
{
//	int len;
	const char str[] = "http://.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = ft_strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);	
}
