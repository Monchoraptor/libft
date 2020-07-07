/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:16:43 by amoracho          #+#    #+#             */
/*   Updated: 2020/02/29 18:27:19 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstnew(void *content)
{
	t_list *p;

	p = malloc(sizeof(t_list));
	p->content = content;
	p->next = 0;
	return (*p);
}
