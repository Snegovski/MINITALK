/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:00:54 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/13 22:15:32 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)

{
	t_list	*point;

	if (lst == NULL)
		return (NULL);
	point = lst;
	while (point != NULL)
	{
		if (point->next == NULL)
			return (point);
		point = point->next;
	}
	return (NULL);
}
