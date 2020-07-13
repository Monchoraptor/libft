/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:15:26 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/14 00:43:30 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);

}

char		*ft_itoa(int n)
{
	long	ln;
	int		i;
	char	*s;

	ln = n;
	i = ft_count(n);
	if (!(s = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (ln < 0)
	{
		s[0] = '-';
		ln = ln * -1;
	}
	s[i] = '\0';
	i -= 1;
	while (ln > 0)
	{
		s[i] = ln % 10 + '0';
		ln = ln / 10;
		i--;
	}
	return (s);

}
/*
**int main(int argc, char **argv)
**{
**	printf("%s\n",ft_itoa(ft_atoi(argv[1])));
**}
*/
