/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:41:19 by amoracho          #+#    #+#             */
/*   Updated: 2020/02/29 18:27:46 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list l2;
	t_list ret;
	t_list aux;

	aux = lst;
	l2 = ft_lstnew(f(lst.content));
	ret = l2;
	while (aux.next)
	{
		l2.next = ft_lstnew(f(del(aux.content)));
		l2 = l2.next;
		aux = aux.next;
	}
	return (ret);
}
