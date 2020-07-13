/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:12:58 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 02:52:35 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t i;

	if (!src)
		return (0);
	if (!size)
		return ((unsigned int)ft_strlen(src));
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((unsigned int)ft_strlen(src));
}
/*
**int main(int argc, char **argv)
**{
**	if (argc<argc+1)
**	{
**	char abc[100];
**	strlcpy(abc,argv[1],20);
**	char abc2[100];
**	strlcpy(abc2,argv[1],20);
**	printf("\n%lu\n",ft_strlcpy(abc, argv[2],argv[3][0]-48));
**	printf("\n%lu\n",strlcpy(abc2, argv[2],argv[3][0]-48));
**	printf("%s\n%s",abc,abc2);}}
*/
