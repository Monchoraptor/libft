/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 19:05:05 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/14 01:41:41 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned long	ft_atoul(const char *str)
{
	int				i;
	unsigned long	aux;

	i = 0;
	aux = 0;
	while (ft_isdigit(*(str + i)))
	{
		aux = ((aux * 10) + (*(str + i) - 48));
		if (aux > 9223372036854775808ul)
		{
			return (9223372036854775809ul);
		}
		i++;
	}
	return (aux);
}

int						ft_atoi(const char *str)
{
	int				i;
	unsigned long	aux;
	int				s;

	i = 0;
	while (ft_isspace(*(str + i)))
		i++;
	if (ft_issign(*(str + i)) && (!ft_isdigit(*(str + i + 1))))
		return (0);
	s = ft_issign(*(str + i));
	if (ft_issign(*(str + i)))
		i++;
	aux = ft_atoul(str + i);
	if ((aux > 9223372036854775807ul) && (s == 1 || s == 0))
		return (-1);
	else if ((aux > 9223372036854775808ul) && s == -1)
	{
		return (0);
	}
	if (s != 0)
		return ((int)s * aux);
	return ((int)aux);
}
/*
**int main(int argc, char **argv)
**{
**(void)argc;
**printf("%i\n",ft_atoi(argv[1]));
**printf("%i",atoi(argv[1]));
**		return 0;
**}
*/
