/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 13:32:43 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/07 01:44:03 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**#include <bsd/string.h>
**#include <stdlib.h>
**#include <stdio.h>
*/

void	*ft_bzero(void *b, int len)
{
	int				i;
	unsigned char	*q;

	q = b;
	i = 0;
	while (i < len)
	{
		*(q + i) = 0;
		i++;
	}
	return (b);
}

/*
**int main(int argc, char ** argv)
**{
**	(void)argc;
**	char *s1 = malloc(50);
**	char *s2 = malloc(50);
**	strncpy(s1, argv[1], 10);
**	strncpy(s2, argv[1], 10);
**	ft_bzero(s1, argv[2][0]-48);
**	bzero(s2, argv[2][0]-48);
**	//ft_memset(s1,argv[2][0],-1);
**	//memset(s2, argv[2][0],-1);
**	int i;
**	for(i = 0; i < 10; i++)
**  		printf("%c", s1[i]);
**	for(i = 0; i < 10; i++)
**  		printf("%c", s2[i]);
**	//printf("%s\n%s",s1,s2);
**}
*/   
