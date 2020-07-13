/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:59:13 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/13 16:13:46 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_aux1(const char *s, char c)
{
	int i;

	i = 0;
	if (*s != c && *s)
	{
		s++;
		i++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s)
				i++;
		}
		s++;
	}
	return (i);
}

static int		ft_aux2(const char *str, char c)
{
	int cu;

	cu = 0;
	while (*str != c && *str)
	{
		cu++;
		str++;
	}
	return (cu);
}

static void		*ft_aux3(char **ar)
{
	int		i;

	i = 0;
	while (ar[i])
	{
		free(ar[i++]);
	}
	free(ar);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	int			j;
	int			i;
	char		**ar;

	j = 0;
	i = 0;
	if (!s || (!(ar = (char **)malloc(sizeof(char *) * (ft_aux1(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!(ar[j] = (char *)malloc(sizeof(char) * (ft_aux2(s, c) + 1))))
				return (ft_aux3(ar));
			while (*s && *s != c)
				ar[j][i++] = (char)*s++;
			ar[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	ar[j] = NULL;
	return (ar);
}
/*
**int main(int argc, char **argv)
**{
**	(void)argc;
**	//char s[50]="aaaXXaaXa";
** //	printf("a\n");
**	char **p = ft_split(argv[1], argv[2][0]);
** //	printf("d\n");
**	int i = 0;
**if (p)
**	{
**	while(i < argv[3][0] - '0')
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
