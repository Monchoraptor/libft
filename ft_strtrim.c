/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:06:07 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 04:52:45 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;
	char	*aux;

	j = ft_strlen(s1);
	aux = malloc(j);
	if (!aux)
		return (0);
	i = 0;
	while (ft_isin(set, *(s1 + i)))
		i++;
	while (ft_isin(set, *(s1 + j - 1)))
		j--;
	k = 0;
	while (i < j)
	{
		*(aux + k) = *(s1 + i);
		i++;
		k++;
	}
	*(aux + k + 1) = '\0';
	return (aux);
}
/*
**int main(int argc, char **argv)
**{
**	char *a = malloc(100);
**	ft_strlcpy(a, argv[1], ft_strlen(argv[1]));
** //	char *b = malloc(100);
** //	if (b == 0) 
** //	ft_strlcpy(b, argv[2], ft_strlen(argv[2]));
**	char *b = "t";
** //	printf("%s\n",a);
** //	printf("%s\n",b);
**	char *s1 = ""; 
**	char *s2 = "a";
**	printf("%s",ft_strtrim(s1,s2));
**		//printf("%c/%i/%s\n",*(s1 + i),!ft_isin(set, *(s1 + i)),c);
**}
*/
