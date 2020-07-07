/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:04:29 by amoracho          #+#    #+#             */
/*   Updated: 2020/02/29 12:18:23 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	y;
	char	*p;

	p = malloc(len);
	i = 0;
	y = start;
	while ((i < len) && (s[y] != 0))
	{
		*(p + i) = s[y];
		i++;
		y++;
	}
	return (p);
}
/*
**int main()
**{
**	char a[10] = "qwerty";
**	char b[10] = "";
**	strlcat(b,ft_substr(a,0,6),10);
**	printf("%s",b);
**}
*/
