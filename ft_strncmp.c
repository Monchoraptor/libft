/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c arreglar                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 18:40:23 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/08 16:48:04 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((*s1 != *s2) || (*s1 == 0) || (*s2 == 0) || (n == 0))
		return (*s1 - *s2);
	return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
}
/*
**int main()
**{
**	printf("%i\n", ft_strncmp("qwerty","iqwrerty",3));
**	printf("%i", strncmp("qwerty","iqwrerty",3));
**	return 0;
**}
*/
