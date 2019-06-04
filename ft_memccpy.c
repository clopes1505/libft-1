/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:32:05 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/29 09:24:56 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (d);
		i++;
	}
	return (0);
}


int	main(void)
{
	char *msg = "This is the string";
	char buffer[80];

	memset( buffer, '\0', 80);
	memccpy( buffer, msg, 's', 10);

	printf("%s\n", buffer);

/*---------------------ft-----------------------*/

	char *m = "This is the string";
	char buf[80];

	memset( buf, '\0', 80);
	ft_memccpy( buf, m, 's', 10);

	printf("%s\n", buf);
}
