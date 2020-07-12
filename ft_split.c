/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:59:13 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 05:46:35 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countuntil(char const *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		if (*(s + i) == c )
			return(i);
		i++;
	}
	return (i);
}

int	ft_countocurrences(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(s + j))
	{
		if (*(s + j) == c)
			i++;
		j++;
	}
	return (i);
}

char	*ft_chartostr(char c)
{
	char	*s;

	s = malloc(sizeof(char) * 2);
	if (s)
	{
		s[0] = c;
		s[1] = '\0';
	}
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	char	*aux;
	char	**ar;
	int	j;

	ar = malloc(sizeof(char *) * (ft_countocurrences(s, c) + 1));
	if (!ar)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_countocurrences(s, c) + 1)
	{
		aux = ft_substr(s, j, ft_countuntil(s + j, c));
		j = ft_strnstr(s + j, ft_chartostr(c),  ft_strlen(s + j)) - s + 1;
		if (!aux)
			return (0);
		ar[i++] = aux;
	}
	return (ar);
}
/*
**
**int main(int argc, char **argv)
**{
**	char s[50]="aaaXXaaXa";
** //	printf("a\n");
**	char **p = ft_split(argv[1], argv[2][0]);
** //	printf("d\n");
**	int i = 0;
**	if (p)
**	{
**		while(i < 4)
**		{
**			if(p[i])
**				printf("%s\n",p[i]);
**			//printf("%i|%c\n",p[0][i],p[0][i]);
**			i -= -1;
**		}
**	}
**	return (0);
**}
*/
