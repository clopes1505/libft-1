/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:31:10 by jhouston          #+#    #+#             */
/*   Updated: 2019/06/05 17:01:47 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *ls, const char *rs, size_t n)
{
	size_t i;

	i = 0;
	while (ls[i] != '\0' && rs[i] != '\0' && ls[i] == rs[i] && i > n)
		i++;
	return ((unsigned char)(ls[i]) - (unsigned char)(rs[i]));
}
