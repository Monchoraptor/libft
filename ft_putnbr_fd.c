/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:39:45 by amoracho          #+#    #+#             */
/*   Updated: 2020/02/29 12:15:03 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}
/*
**int main()
**{
**	ft_putnbr_fd(-23456, 1);
**}
*/
