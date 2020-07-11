/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:12:58 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 17:44:12 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	if (size > 0 && size - 1 > ft_strlen(dst))
	 {
		i = ft_strlen(dst);
		k = ft_strlen(dst);
		j = 0;
		while (*(src + j) && i < size - 1)
		{
			*(dst + i) = *(src + j);
			i++;
			j++;
		}
		*(dst + i) = '\0';
		return (ft_strlen(src) + k);
	}
	return (size + ft_strlen(src));
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
