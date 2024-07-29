/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:34:46 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:34:46 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	void	*memory_output;

	if (size && (count > (UINT_MAX / size)))
		return (NULL);
	memory_output = malloc(count * size);
	if (memory_output == NULL)
		return (NULL);
	ft_bzero(memory_output, count * size);
	return (memory_output);
}
