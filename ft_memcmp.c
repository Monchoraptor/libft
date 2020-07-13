/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:14:36 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 17:01:21 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n)
	{
		if(p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
**	int main()
**	{
**	int x;
**	int y;
**	int i = 0;
**	char a[10]="qwertya";
**	char b[10]="qwerty";
**	while (i < 10)
**	{
**		x = ft_memcmp(a,b,15);
**		y = memcmp(a,b,15);
**	//	printf("Mine:%i\n",x);
**	//	printf("Machine:%i\n",y);
**		if (x != y)
**		{
**			printf("Mine:%i\n",x);
**			printf("Machine:%i\n",y);
**			break;
**		}
**		i++;
**	}
**	//printf("%i",y);
**	//printf("Mine:%i\n",ft_memcmp(a,b,10));
**	//printf("Machine:%i\n",memcmp(a,b,10));
**}
**
**
**int main()
**{
**	char *s1 = ".........";
**	char *s2 = ".........";
**	printf("%i\n",ft_memcmp(s1,s2,10));
**	printf("%i",memcmp(s1,s2,10));
**}
*/
