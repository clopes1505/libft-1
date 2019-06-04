/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:20:09 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/04 16:27:42 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = ft_strlen(src);

	j = 0;
	while (j < dstsize - ft_strlen(dst) - 1)
	{
		dst[j] = src[j];
		j++;;
	}
	while (src[i] != '\0' || dstsize > 0)
		i++;
	return (0);
}
