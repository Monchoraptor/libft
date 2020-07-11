/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 19:19:35 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/10 16:37:04 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
			return (1);
	return (0);
}
/*
**int main()
**{
**	int i = -1;
**	while (i<530)
**	{
**		if(ft_isdigit(i) != isdigit(i))
**			printf("%i|%i|%i\n",i, ft_isdigit(i), isdigit(i));
**		i++;
**	}
**}
*/
