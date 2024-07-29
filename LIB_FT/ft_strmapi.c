/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:38:35 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/13 13:46:31 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	int		length;
	char	*output;
	int		index;

	index = 0;
	length = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (0);
	output = malloc(sizeof(char) * (length + 1));
	if (output == 0)
		return (0);
	while (s[index] != '\0')
	{
		output[index] = f(index, s[index]);
		index++;
	}
	output[index] = '\0';
	return (output);
}
