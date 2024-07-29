/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/09/21 08:37:10 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/09/21 08:37:10 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	int		c;
	int		v;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	c = 0;
	while (s1[c] != '\0')
	{
		str[c] = s1[c];
		c++;
	}
	v = 0;
	while (s2[v] != '\0')
	{
		str[c + v] = s2[v];
		v++;
	}
	str[c + v] = '\0';
	return (str);
}
