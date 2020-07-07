/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:14:36 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/29 15:56:40 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*p1;
	const char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	while ((p1[i] == p2[i]) && (i < n))
		i++;
	return (p1[i] - p2[i]);
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
*/
