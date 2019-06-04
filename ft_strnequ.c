/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 15:26:35 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/29 17:05:24 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);	
}
int	main(void)
{
	const char *str = "Policeman";
	const char *str2 = "Policean";
	int i;

	i = ft_strnequ(str, str2, 12);
	printf("%i", i);
}
