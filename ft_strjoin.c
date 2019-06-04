/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 07:16:54 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 07:47:17 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2));
	str = ft_strcat((char*)s1, s2);
	return (str);
}

int	main(void)
{
	char s[50], d[50];
	ft_strcpy(s, "Hello, World");
	ft_strcpy(d," How are you!");
	char *res;

	res = ft_strjoin(s, d);
	printf("%s", res);	
}
