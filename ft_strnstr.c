/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 17:56:53 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/08 17:04:26 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	char	*le;

	le = 0;
	i = 0;
	j = 0;
	while (i < len)
	{
		if (j == 0)
			le = (char *)haystack + i;
		if (needle[j] == '\0')
			return (le);
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	return ((char *)haystack);
}
/*
**int main(int argc, char **argv)
**{
**	(void)argc;
**	printf("%s",strnstr(argv[1],argv[2],200));
**	return 0;
**}
*/
