/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:15:26 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/11 06:10:45 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;

	s = malloc(11);
	if (n == -2147483648)
	{
		ft_strlcpy(s,"-2147483648",12);
		return (s);
	}
	if (n < 0)
	{
		*s = '-';
		return (ft_strjoin(s, ft_itoa(-1 * n)));
	}
	*s = (n % 10) + '0';
	if (n < 10)
	{
		*(s + 1) = '\0';
		return (s);
	}	
	return (ft_strjoin(ft_itoa(n / 10), s));
}
/*
**int main(int argc, char **argv)
**{
**	printf("%s\n",ft_itoa(ft_atoi(argv[1])));
**}
*/
