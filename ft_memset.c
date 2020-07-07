/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 13:18:29 by amoracho          #+#    #+#             */
/*   Updated: 2020/07/07 00:22:00 by amoracho                   ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*q;

	q = b;
	i = 0;
	while (i < len)
	{
		*(q + i) = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
**	int main(int argc, char ** argv){
**		(void)argc;
**		char *s1 = malloc(50);
**		char *s2 = malloc(50);
**		strncpy(s1, argv[1], 10);
**		strncpy(s2, argv[1], 10);
**		//ft_memset(s1,argv[2][0],argv[3][0]-48);
**		//memset(s2, argv[2][0], argv[3][0]-48);
**		//ft_memset(s1,argv[2][0],-1);
**		memset(s2, argv[2][0],-1);
**		printf("%s\n%s",s1,s2);
**	}
*/
