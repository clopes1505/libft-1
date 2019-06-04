/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:31:11 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/28 09:55:49 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *d, const void *s, size_t n)
{
	char *src = (char *)s;
	char *dest = (char *)d;
	char temp[n];
	size_t i;

	i = 0;
	while (i < n)
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = temp[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	const char src[50] = "Hey There!";
	char dest[50];

	strcpy(dest, "Heloooo!!");
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, strlen(src) + 1);
	printf("After memmove dest = %s, src = %s\n", dest, src);

/*-------------ft------------*/

	const char s[50] = "Hey There!";
	char d[50];

	strcpy(d, "Heloooo!!");
	printf("Before ft_memmove dest = %s, src = %s\n", d, s);
	ft_memmove(d, s, strlen(src) + 1);
	printf("After ft_memmove dest = %s, src = %s\n", d, s);

	return (0);
}
