/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:20:45 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/05 07:39:44 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
   char src[40];
   char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "--> nyancat <--\n\r");
   strcpy(dest, src);

   printf("Final copied string : %s\n\n", dest);
*---------------------ft------------------*
   char s[40];
   char d[100];

   memset(d, '\0', sizeof(d));
   ft_strcpy(s, "--> nyancat <--\n\r");
   ft_strcpy(d, s);

   printf("Final copied string : %s\n", d);
}
*/
