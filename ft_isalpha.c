/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:06:50 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/30 11:11:09 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	return (0);
}
/*
**	int main(int argc, char **argv)
**	{
**	(void)argc;
**	(void)argv;
**	//int i = 0;
**	//while (i++ < 127)
**	//printf("%i \\\\ %i \\\\ %c  \n",i, ft_isupper(i), i);
**	printf("%i",ft_isalpha(argv[1][0]));
**	printf("%i",isalpha(argv[1][0]));
**	return (0);
**	}
*/
