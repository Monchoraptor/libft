/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countuntil.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 11:23:11 by amoracho          #+#    #+#             */
/*   Updated: 2020/02/29 12:13:19 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_countuntil(char const *s, char c)
{
	int i;

	i = 0;
	while ((*(s + i) != c) && (*(s + i) != 0))
		i++;
	return (i);
}
