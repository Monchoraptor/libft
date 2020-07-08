/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c   arreglar                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:12:58 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/08 16:52:54 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t i;

	i = 0;
	while ((i < size - 1) && (*(src + i) != '\0'))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	while (*(src + i) != '\0')
		i++;
	return (i);
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
