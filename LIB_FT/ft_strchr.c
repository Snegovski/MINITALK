/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:49:42 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:49:42 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)

{
	char	*str;

	str = (char *)s;
	while (*str != '\0' && *str != (unsigned char) c)
		str++;
	if (*str == '\0' && ((unsigned char) c) != '\0')
		return (NULL);
	return (str);
}
