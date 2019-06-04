/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:02:20 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/29 07:16:43 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void ft_strclr(char *s)
{
	while (s != NULL && *s)
	{
		*s++ = '\0';
	}
}
/*
int	main(void)
{
	char *str = "Hello";
	ft_strclr(str);
	printf("%s", str);
}*/
