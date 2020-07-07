/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:12:58 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/30 11:20:43 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	while (*(dst + i) != '\0')
		i++;
	j = 0;
	while (i < size - 1)
	{
		*(dst + i) = *(src + j);
		i++;
		j++;
	}
	*(dst + i) = '\0';
	return (ft_strlen(src) + size);
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
**	printf("\n%lu\n",ft_strlcat(abc, argv[2],argv[3][0]-48));
**	printf("\n%lu\n",strlcat(abc2, argv[2],argv[3][0]-48));
**	printf("%s\n%s",abc,abc2);}}
*/
