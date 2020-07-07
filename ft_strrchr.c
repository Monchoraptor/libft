/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 18:14:08 by amoracho          #+#    #+#             */
/*   Updated: 2020/02/29 12:17:20 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *s, int c)
{
	char	*p;
	int		i;

	i = 0;
	p = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			p = s + i;
		i++;
	}
	return (p);
}
/*
**int main(int argc, char **argv)
**{
**	(void)argc;
**	printf("%s\n$\n%s",
**		ft_strrchr(argv[1],argv[2][0]),strrchr(argv[1],argv[2][0]));
**}
*/
