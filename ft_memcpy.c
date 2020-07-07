/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:36:12 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/07 01:45:57 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*p1;
	char		*p2;

	p1 = src;
	p2 = dst;
	i = 0;
	while (i < n)
	{
		p2[i] = p1[i];
		i++;
	}
	return (dst);
}

/*
**	int main()
**	{
**	char a[50]= "qwertyuiop";
**	char b[50];
**
**	memcpy(b,a,50);
**	printf("a:%p:%s\nb:%p:%s",a,a,b,b);
**
**}
*/
