/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:12:58 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 17:45:50 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t j;
	size_t i;

	i = 0;
	j = ft_strlen(src);
	if (!size)
		return (j);
	while (*dst && size)
	{
		dst++;
		i++;
		size--;
	}
	while (*src && size > 1)
	{
		*dst++cd = *src++;
		size--;
	}
	if (size != 0)
	{
		*dst = '\0';
	}
	return (j + i);
}
/*
**int main(int argc, char **argv)
**{
**	if (argc<argc+1)
**	{
**	char abc[100];
**	ft_strlcpy(abc,argv[1],20);
**	char abc2[100];
**	ft_strlcpy(abc2,argv[1],20);
**	printf("\n%lu\n",ft_strlcat(abc, argv[2],argv[3][0]-48));
** //	printf("\n%lu\n",strlcat(abc2, argv[2],argv[3][0]-48));
**	printf("%s\n%s",abc,abc2);}}
*/
