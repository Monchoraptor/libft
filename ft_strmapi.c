/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 14:14:57 by amoracho          #+#    #+#             */
/*   Updated: 2020/02/29 12:15:41 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	s2 = malloc(i + 1);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(s2 + i) = f(*(s + i), *(s + i));
		i -= -1;
	}
	return (s2);
}
/*
**char funcio(unsigned int i, char c)
**{
**
**	(void)i;
**	(void)c;
**	return 'a';
**}
**
**int main()
**{
**	char a[50] = "r";
**	printf("%s\n", ft_strmapi(a,funcio));
**	return(0);
**}
*/
