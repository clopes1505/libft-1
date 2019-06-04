/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:17:57 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 07:46:00 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
	char src[50];
	char dest[50];
	strcpy(src, "This is source");
	strcpy(dest, "This is destination");

	strcat(dest, src);

	printf("Final destination string : |%s|\n\n", dest);
*---------------------ft------------------------*
   char s[50], d[50];

   strcpy(s,  "This is source");
   strcpy(d, "This is destination");

   strcat(d, s);

   printf("Final destination string : |%s|\n", d);
   
   return(0);
}
*/

