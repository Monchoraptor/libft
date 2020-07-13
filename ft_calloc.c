/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:40:25 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 00:21:47 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *p;

	p = (malloc(count * size));
	if (p)
	{
		ft_bzero(p, count * size);
		return (p);
	}
	return (0);
}
/*
**	int main()
**	{
**	char *p;
**	p = ft_calloc(10,40);
**	int i = 0;
**	while (i<400)
**	{
**		printf("%p\\%c\\%i\n",p+i,*(p+i),*(p+i));
**		i++;
**	}
**	}
*/
