/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:14:28 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/27 08:48:44 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	i = ft_strlen(src);
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
   char src[50], dest[50];

   strcpy(src,  "Source Destination");
   strcpy(dest, "This is destination");

   strncat(dest, src, 15);

   printf("Final destination string : |%s|\n\n", dest);
   /*-------------------------ft----------------------------*/
	char s[50];
	char  d[50];

	strcpy(s,  "Source Destination");
	strcpy(d, "This is destination");

	strncat(d, s, 15);

   printf("Final destination string : |%s|\n", d);
}
