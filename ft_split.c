/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:59:13 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/30 11:38:03 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countuntil(char const *s, char c)
{
	int i;

	i = 0;
	while ((*(s + i) != c) && (*(s + i) != 0))
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;
	char	*aux;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(100 * sizeof(char *));
	aux = malloc(ft_countuntil(s, c) + 1);
	while (i < ft_countuntil(s, 0) + 1)
	{
		if ((*(s + i) != c) && (*(s + i) != 0))
			*(aux + k++) = *(s + i);
		else
		{
			*(aux + k) = 0;
			*(tab + j++) = aux;
			aux = malloc(ft_countuntil(aux + i + 1, c) + 1);
			k = 0;
		}
		i++;
	}
	return (tab);
}
/*
**int main()
**{
**	char s[50]=" th htfhXhghgX yjth";
**	//printf("a\n");
**	char **p = ft_split(s, 'X');
**	//printf("d\n");
**	int i = 0;
**	while(i < 10)
**	{
**		printf("%s\n",p[i]);
**		//printf("%i|%c\n",p[0][i],p[0][i]);
**		i -= -1;
**	}
**}
*/
