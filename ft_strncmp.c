/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:31:10 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/29 17:03:51 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *ls, const char *rs, size_t n)
{
	size_t i;
	n = 0;
	i = 0;
	while (ls[i] == rs[i] && ls[i] != '\0' && rs[i] != '\0' && i < n - 1)
	{
//		if (n == i)
//			return (ls[i] - rs[i]);
		i++;
	}
	return (ls[i] - rs[i]);
}
