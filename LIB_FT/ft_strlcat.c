/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:51:36 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:51:36 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	i;
	size_t	s;

	if (dst == NULL && dstsize == 0)
		return (0);
	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (d >= dstsize)
		return (dstsize + s);
	i = 0;
	while (i < s && i + d + 1 < dstsize)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	if (dstsize < d)
		d = dstsize;
	return (d + s);
}
