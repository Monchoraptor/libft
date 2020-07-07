/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:30:10 by amoracho          #+#    #+#             */
/*   Updated: 2020/02/29 12:18:51 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	return (c);
}

/*
**int	main(int argc, char **argv)
**{
**	(void)argc;
**	int i = 0;
**	while (argv[1][i] != '\0')
**	{
**		printf("%c",ft_toupper(argv[1][i]));
**		i++;
**	}
**	printf("\n");
**	i = 0;
**	while (argv[1][i] != '\0')
**	{
**		printf("%c",ft_tolower(argv[1][i]));
**		i++;
**	}
**}
*/
