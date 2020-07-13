/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:06:07 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/12 15:20:53 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	k = ft_strlen(s1);
	while (s1[j] && ft_isin(set, s1[j]))
		j++;
	while (k > j && ft_isin(set, s1[k - 1]))
		k--;
	aux = (char*)malloc(sizeof(*s1) * (k - j + 1));
	if (!aux)
		return (NULL);
	i = 0;
	while (j < k)
		aux[i++] = s1[j++];
	aux[i] = 0;
	return (aux);
}
/*
**		int main(int argc, char **argv)
**		{
**		char *a = malloc(100);
**		ft_strlcpy(a, argv[1], ft_strlen(argv[1]));
**	 //	char *b = malloc(100);
**	 //	if (b == 0)
**	 //	ft_strlcpy(b, argv[2], ft_strlen(argv[2]));
**		char *b = "t";
**	 //	printf("%s\n",a);
**	 //	printf("%s\n",b);
**		char *s1 = "";
**		char *s2 = "a";
**		printf("-->%s<--",ft_strtrim(s1,s2));
**			//printf("%c/%i/%s\n",*(s1 + i),!ft_isin(set, *(s1 + i)),c);
**		}
**
*/
