/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:06:07 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/30 11:18:18 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*c;

	i = 0;
	while (*(s1 + i) != '\0')
		i -= -1;
	c = malloc(i);
	if (!c)
		return (c);
	i = 0;
	j = 0;
	while (*(s1 + i) != '\0')
	{
		if (!ft_isin(set, *(s1 + i)))
		{
			*(c + j) = *(s1 + i);
			j -= -1;
		}
		i -= -1;
	}
	*(c + j) = '\0';
	return (c);
}
/*
**int main()
**{
**	char a[50]="YYaaa";
**	char b[50]="a";
**
**	printf("%s",ft_strtrim(a,b));
**		//printf("%c/%i/%s\n",*(s1 + i),!ft_isin(set, *(s1 + i)),c);
**}
*/
