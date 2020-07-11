/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 18:46:13 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 03:00:22 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int	i;
	int	j;
	char	*s;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s = (char *)malloc(i + j);
	if (s == 0)
		return (0);
	i = -1;
	while (*(s1 + ++i) != '\0')
		*(s + i) = *(s1 + i);
	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(s + i) = *(s2 + j);
		j++;
		i++;
	}
	*(s + i) = *(s2 + j);
	return (s);
}
/*
**int		main()
**{
**	char a[42];
**	char b[42];
**	char c[84];
**	int i;
**
**	ft_strlcpy(a,"qwertyuiop",15);
**	ft_strlcpy(b,"asdfghjkl",15);
**	ft_strlcpy(c, ft_strjoin(a, b),20);
**	printf("%s\n", c);
**	i = 0;
**	while (i < 20)
**	{
**		printf("%c||", *(c+i));
**		printf("%i\n", *(c+i));
**		i++;
**	}
**	return 0;
**}
*/
