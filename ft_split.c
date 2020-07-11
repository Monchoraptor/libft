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

int	ft_countuntil(char const *s, char c, int n)
{
	int i;
	int n1;

	i = 0;
	n1 = 0;
	while (*(s + i) != 0)
	{
		if (*(s + i) == c && n1 == n)
			return(i);
		else if (*(s + i) == c)
			n1++;
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

char	**ft_split(char const *s, char c)
{
	int	i;
	char	*aux;
	char	**ar;
	int	j;
	int	k;

	ar = malloc(sizeof(char *) * (ft_countocurrences(s, c) + 1));
	if (!ar)
		return (0);
	i = 0;
	k = 0;
	while (i < ft_countocurrences(s, c) + 1)
	{
		j = 0;
		aux = malloc(sizeof(char) * (ft_countuntil(s, c, i) + 1));
		if (!s)
			return (0);
		while (k < ft_countuntil(s, c, i) + 1)
			*(aux + j++) = *(s + k++);
		*(aux + j - 1) = '\0';
		*(ar + i) = aux;
		i++;
	}
	return (ar);
}
/*
**int main(int argc, char **argv)
**{
**	char s[50]="aaaXXaaXa";
**	//printf("a\n");
**	char **p = ft_split(argv[1], argv[2][0]);
**	//printf("d\n");
**	int i = 0;
**	while(i < ft_countocurrences(argv[1], argv[2][0]) + 1)
**	{
**		printf("%s\n",p[i]);
**		//printf("%i|%c\n",p[0][i],p[0][i]);
**		i -= -1;
**	}
**	return (0);
**}
*/
