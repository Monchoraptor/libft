/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 19:19:35 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/13 15:07:10 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	return ((c >= '0') && (c <= '9'));
}
