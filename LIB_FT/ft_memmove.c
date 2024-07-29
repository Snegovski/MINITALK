/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:16:02 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/15 16:14:13 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char		*modified_dest;
	const unsigned char	*modified_src;
	size_t				index;

	index = 0;
	modified_dest = (unsigned char *)dst;
	modified_src = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (modified_src < modified_dest)
	{
		while (++index <= len)
			modified_dest[len - index] = modified_src[len - index];
	}
	else
	{
		while (index < len)
		{
			modified_dest[index] = modified_src[index];
			index++;
		}
	}
	return (dst);
}
