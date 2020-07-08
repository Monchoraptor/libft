/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c   arreglar                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:35:45 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/08 16:27:48 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		aux[len];
	size_t		i;
	const char	*s;
	char		*d;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	//printf("B\n");
	while (i < len)
	{
		aux[i] = s[i];
		//printf("%c",aux[i]);
		i++;
	}
	i = 0;
	//printf("A\n");
	while (i < len)
	{
		d[i] = aux[i];
	//	printf("B\n");
	//	printf("%lu",i);
		i++;
	}
	return (dst);
}
/*
**int main()
**{
**	char a[50]= "qwertyuiop";
**	char b[50];
**
**	ft_memmove(b,a,50);
**	printf("a:%p:%s\nb:%p:%s\n",a,a,b,b);
**	char c[50]= "qwertyuiop";
**	char d[50];
**	memmove(d,c,50);
**	printf("c:%p:%s\nd:%p:%s",c,c,d,d);
**
**}

int main()
{
	int size = 128 * 1024 * 1024;
	char *dst = (char *)malloc(sizeof(char) * size);
	char *data = (char *)malloc(sizeof(char) * size);
	printf("A\n");
	ft_memmove(dst, data, size);
}
*/
