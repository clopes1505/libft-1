/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:20:09 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/05 10:19:03 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	if (j > dstsize)
		return (dstsize + i);
	if (i < (dstsize - j))
		ft_memcpy((dst + j), src, i + 1);
	else
	{
		ft_memcpy((dst + j), src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (i + j);
}
