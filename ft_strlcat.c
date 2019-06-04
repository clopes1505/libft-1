/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:20:09 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 09:57:11 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
//	size_t p;

	i = ft_strlen(src);

	j = 0;
	while (j < dstsize - ft_strlen(dst) - 1)
	{
		dst[j] = src[j];
		j++;;
	}
	while (src[i] != '\0' || dstsize > 0)
		i++;
//	p = j + i;
	return (0);
}

int	main(void)
{
	const char source[] = "bar";
	char destination[5] = "foo";
	size_t n;

	n = strlcat(destination, source, 2);	
	ft_putnbr (n);
		
	/*-----------------------ft---------------------------*/

	const char src[] = "Policeman";
	char dest[10] = "ice";

	if (ft_strlcat(dest, src, 1))
		puts("src was truncated when concesnasn dest");
}
