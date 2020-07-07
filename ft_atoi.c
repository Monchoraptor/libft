/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 19:05:05 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/29 15:46:48 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int aux;

	i = 0;
	while (ft_isspace(*(str + i)))
		i++;
	if (ft_issign(*(str + i)) && (!ft_isdigit(*(str + i + 1))))
		return (0);
	if (ft_issign(*(str + i)))
		return (ft_issign(*(str + i)) * ft_atoi(str + i + 1));
	aux = 0;
	while (ft_isdigit(*(str + i)))
	{
		aux = ((aux * 10) + (*(str + i) - 48));
		i++;
	}
	return (aux);
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
