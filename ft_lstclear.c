/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 18:08:48 by amoracho          #+#    #+#             */
/*   Updated: 2020/02/29 21:58:19 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (***lst->next)
	{
		del(*lst->content);
		free(*lst->content);
		ft_lstclear(*lst->next, del);
		free(*lst->next);
		free(*lst);
	}
	else
	{
		del(*lst->content);
		free(*lst->content);
		free(*lst->next);
		free(*lst);
	}
	**lst = 0;
}
