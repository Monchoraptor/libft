/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:23:29 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/30 11:19:38 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *s1)
{
	int		i;
	char	*p;

	i = 0;
	while (*(s1 + i) != '\0')
		i++;
	p = malloc(i + 1);
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	*(p + i) = 0;
	return (p);
}
/*
**int main()
**{
**	char a[50]= "qwertyuiop";
**	char *p;
**
**	p = ft_strdup(a);
**	printf("%p\\%s\n%p\\%s",a,a,p,p);
**}
*/
