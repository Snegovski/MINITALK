/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:47:22 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/13 21:59:20 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list		*temporary;
	int			index;

	temporary = lst;
	index = 0;
	while (temporary != NULL)
	{
		index++;
		temporary = temporary->next;
	}
	return (index);
}
