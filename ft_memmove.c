/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 15:30:34 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/07 01:59:06 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		aux[len];
	size_t		i;
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	i = 0;
	while (i < len)
	{
		aux[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = aux[i];
		i++;
	}
	return (dst);
}

int main()
{
	char a[50]= "qwertyuiop";
	char b[50];

	ft_memmove(b,a,50);
	printf("a:%p:%s\nb:%p:%s\n",a,a,b,b);
	char c[50]= "qwertyuiop";
	char d[50];
	memmove(d,c,50);
	printf("c:%p:%s\nd:%p:%s",c,c,d,d);

}

