/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:26:43 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/29 15:57:33 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
**
**int main()
**{
**	printf("%i",1);
**	//	ft_putchar_fd('4',1);
**	//	ft_putchar_fd('2',1);
**	//	ft_putchar_fd('\n',1);
**	}
*/

