/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:41:12 by amoracho          #+#    #+#             */
/*   Updated: 2020/02/29 21:37:25 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst->content);
}
/*
**int main()
**{
**	int *p;
**	p = malloc(sizeof(int));
**	*p = 5;
**	printf("%i\n",*p);
**	free(p);
**	printf("%i",*p);
**}
*/
