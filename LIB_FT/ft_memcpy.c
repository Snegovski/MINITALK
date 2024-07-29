/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:44:37 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:44:37 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*c;
	char	*v;
	size_t	counter;

	c = (char *)dest;
	v = (char *)src;
	counter = 0;
	if (!c && !v)
		return (NULL);
	while (counter < n)
	{
		c[counter] = v[counter];
		counter++;
	}
	return (c);
}
