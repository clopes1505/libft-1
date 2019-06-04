/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:19:18 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/28 09:55:52 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	char *src = (char *)s;
	char *dest = (char *)d;
	size_t i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (d);
}

int	main(void)
{
	const char src[50] = "Hey There!";
	char dest[50];
	
	strcpy(dest, "Heloooo!!");
	printf("Before memcpy dest = %s, src = %s\n", dest, src);
	memcpy(dest, src, strlen(src) + 1);
	printf("After memcpy dest = %s, src = %s\n", dest, src);

/*-------------ft------------*/
	
	const char s[50] = "Hey There!";
	char d[50];

	strcpy(d, "Heloooo!!");
	printf("Before ft_memcpy dest = %s, src = %s\n", d, s);
	ft_memcpy(d, s, strlen(src) + 1);
	printf("After ft_memcpy dest = %s, src = %s\n", d, s);

	return (0);
}
