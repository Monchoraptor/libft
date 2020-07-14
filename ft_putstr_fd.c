/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:29:56 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/29 16:00:24 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (*(s + i) != '\0' && s)
	{
		ft_putchar_fd(*(s + i), fd);
		i++;
	}
}
/*
**int main()
**{
**	char *a = "qwertyuiop";
**	ft_putstr_fd(a, 1);
**}
*/
