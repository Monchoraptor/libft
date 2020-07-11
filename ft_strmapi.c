/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:14:57 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 06:34:31 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;

	i = 0;
	if (!s || !f)
		return (0);
	while (*(s + i) != '\0')
		i++;
	s2 = malloc(i + 1);
	if (!s2)
		return (0);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(s2 + i) = f(i, *(s + i));
		i++;
	}
	*(s + i) = '\0';
	return (s2);
}
/*
**char funcio(unsigned int i, char c)
**{
**	if (i == 4)
**		return ('w');
**	(void)c;
**	return 'a';
**}
**
**int main()
**{
**	char a[50] = "qqqqqqqqqq";
**	printf("%s\n", ft_strmapi(a,funcio));
**	return(0);
**}
*/
