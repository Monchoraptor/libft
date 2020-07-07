/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:15:26 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/30 11:12:52 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;

	s = malloc(100);
	if (n < 0)
	{
		*s = '-';
		return (ft_strjoin(s, ft_itoa(-1 * n)));
	}
	*s = (n % 10) + '0';
	if (n < 10)
		return (s);
	return (ft_strjoin(ft_itoa(n / 10), s));
}
/*
**int main()
**{
**	printf("%s\n",ft_itoa(-12));
**}
*/
