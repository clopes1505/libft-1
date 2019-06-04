/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:43:54 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/27 10:48:58 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}	

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = (char*)malloc(ft_strlen(s) * sizeof(char));
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

int	main(void)
{
	char *str = "Helloworld";
	char *result;

	result = ft_strdup(str);
	printf("The sring %s", result);
}
