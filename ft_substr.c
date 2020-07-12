/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:04:29 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 19:32:05 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	y;
	char	*p;

	p = malloc(len + 1);
	if (start >= ft_strlen(s) && p)
	{
		*(p) = '\0';
		return (p);
	}
	if (p == 0 || (len + start) > ft_strlen(s) || start > ft_strlen(s))
		return (0);
	i = 0;
	y = start;
	while ((i < len) && (s[y] != 0))
	{
		*(p + i) = s[y];
		i++;
		y++;
	}
	*(p + i) = '\0';	
	return (p);
}
/*
**int main(int argc, char **argv)
**{
** //	char a[10] = "qwerty";
** //	char b[10] = "";
**	char *s;	
**	s = ft_substr(argv[1],argv[2][0]-'0',10);
**	if (s != 0)
**		printf("%s",s);
**	printf("\n%s",ft_substr(argv[1],argv[2][0]-'0',10));
** //argv[3][0]-'0'));
**}
*/
