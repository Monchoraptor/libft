/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 18:46:13 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/30 11:22:06 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	while (*(s1 + i) != '\0')
		i++;
	j = 0;
	while (*(s2 + j) != '\0')
		j++;
	s = (char *)malloc(i + j);
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
**	strlcpy(a,"qwertyuiop",15);
**	strlcpy(b,"asdfghjkl",15);
**	strlcpy(c, ft_strjoin(a, b),20);
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
