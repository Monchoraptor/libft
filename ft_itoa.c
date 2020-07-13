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

static int		ft_count(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n != 0) {
		n /= 10;
		++i;
	}
	return (i + 1);
}

static void		ft_reverse(char *s)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}

char			*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		signo;

	if (!(s = malloc(ft_count(n))))
		return (0);
	if ((signo = n) < 0)
		n = -n;
	i = 0;
	while ((n /= 10) > 0)
		s[i++] = n % 10 + '0';
	if (signo < 0)
		s[i++] = '-';
	ft_reverse(s);
	s[i] = '\0';
	return (s);
}
/*
**int main(int argc, char **argv)
**{
**	printf("%s\n",ft_itoa(ft_atoi(argv[1])));
**}
*/
