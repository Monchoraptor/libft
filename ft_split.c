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

size_t	ft_countocurrences(char const *s, char c)
{
	int		cu;
	int		b;
	
	b = 0;
	cu = 0;
	while (*s)
	{
		if (*s == c)
			b = 0;
		else if (b == 0)
		{
			b = 1;
			cu++;
		}
		s++;
	}
	return (cu);
}

size_t	ft_c(char const *s, int pos, char c)
{
	size_t	len;

	len = 0;
	while (s[pos])
	{
		if (s[pos] == c)
			return (len);
		len++;
		pos++;
	}
	return (len);
}

char			**ft_split(char const *s, char c)
{
	char	**ar;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!(ar = malloc(sizeof(char*) * (ft_countocurrences(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (k == 0)
				if (!(ar[j] = (char*)malloc(sizeof(char) * ft_c(s, i, c) + 1)))
					return (NULL);
			ar[j][k] = s[i];
			ar[j][++k] = '\0';
		}
		if ((s[i] == c && s[i + 1] != c && k > 0) && (k = 0) == 0)
			j++;
	}
	ar[ft_countocurrences(s, c)] = NULL;
	return (ar);
}


int main(int argc, char **argv)
{
	char s[50]="aaaXXaaXa";
 //	printf("a\n");
	char **p = ft_split(argv[1], argv[2][0]);
 //	printf("d\n");
	int i = 0;
if (p)
	{
	while(i < argv[3][0] - '0')
		{
			if(p[i])
				printf("%s\n",p[i]);
			//printf("%i|%c\n",p[0][i],p[0][i]);
			i -= -1;
		}
	}
	return (0);
}

