/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:04:29 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 19:32:05 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*aux;

	if (!(aux = (char *)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			aux[j] = s[i];
			j++;
		}
		i++;
	}
	aux[j] = 0;
	return (aux);
}
/*
**	int main(int argc, char **argv)
**	{
**	 //	char a[10] = "qwerty";
**	 //	char b[10] = "";
**		char *s;
**		s = ft_substr(argv[1],argv[2][0]-'0',argv[3][0]-'0');
**		if (s != 0)
**			printf("%s",s);
**		//printf("\n%s",ft_substr(argv[1],argv[2][0]-'0',10));
**	 //argv[3][0]-'0'));
**	}
*/
