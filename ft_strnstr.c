/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 17:56:53 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 18:53:20 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	while ((size_t)i < len && haystack[i] != '\0')
	{
		j = 0;
		if (needle[0] == haystack[i])
		{
			while (haystack[i + j] == needle[j] && (size_t)(i + j) < len
				&& needle[j] != '\0' )
				j++;
			if (needle[j] == '\0')
				return ((char*)&haystack[i]);
		}
		i++;
	}
	return (0);
}
/*
**	int main(int argc, char **argv)
**	{
**		(void)argc;
**		printf("Mia----->%s\n",ft_strnstr(argv[1],argv[2],5));
**		printf("Otra====>%s",strstr(argv[1],argv[2]));
**		return 0;
**	}
*/
