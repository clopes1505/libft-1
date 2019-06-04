/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:05:37 by jhouston          #+#    #+#             */
/*   Updated: 2019/05/30 10:30:28 by jhouston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char** str_split(const char *s, char c)
{
    char** res = 		0;
    size_t i =			0;
    char* tmp =			(char *)s;
    char* last_comma =	0;
    char delim[2];
    delim[0] = 			c;
    delim[1] = 			0;

    /* Count how many elements will be extracted. */
    while (*tmp)
    {
        if (c == *tmp)
        {
            i++;
            last_comma = tmp;
        }
        tmp++;
    }

    /* Add space for trailing token. */
    i += last_comma < ((char*) s + strlen(s) - 1);

    /* Add space for terminating null string so caller
       knows where the list of returned strings ends. */
    i++;

    res = malloc(sizeof(char*) * i);

    if (res)
    {
        size_t idx  = 0;
        char* token = strtok((char *)s, delim);

        while (token)
        {
            assert(idx < i);
            *(res + idx++) = strdup(token);
            token = strtok(0, delim);
        }
        assert(idx == i - 1);
        *(res + idx) = 0;
    }

    return res;
}

int main()
{
    char months[] = "*Hello*Fellow*Students";
    char** tokens;

    printf("%s", months);

    tokens = str_split(months, ',');
/*
    if (tokens)
    {
        int i;
        for (i = 0; *(tokens + i); i++)
        {
            printf("month=[%s]\n", *(tokens + i));
            free(*(tokens + i));
        }
        printf("\n");
        free(tokens);
    }
*/
    return 0;
}
