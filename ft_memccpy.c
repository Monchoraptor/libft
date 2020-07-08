/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:32:44 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/08 15:35:10 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst,
		const void *src, int c, size_t n)
{
	size_t		i;
	char		*s1;
	char		*s2;

	i = 0;
	s1 = (char *)src;
	s2 = (char *)dst;
	while (i < n)
	{
		s2[i] = s1[i];
		if (s1[i] == (char)c || s2[i] == (char)c)
		{
			i++;
			return (dst + i);
		}
		i++;
	}
	return (NULL);
}

/*
**int main()
**{
**	char a[50]= "qwertyuiop";
**	char b[50];
**
**	ft_memccpy(b,a,'y',50);
**	printf("a:%p:%s\nb:%p:%s\n",a,a,b,b);
**	char c[50]= "qwertyuiop";
**	char d[50];
**	memccpy(d,c,'y',50);
**	printf("c:%p:%s\nd:%p:%s",c,c,d,d);
**
**}
*/
