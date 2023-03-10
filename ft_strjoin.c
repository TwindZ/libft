/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlamoth <emlamoth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:01:07 by emlamoth          #+#    #+#             */
/*   Updated: 2023/01/18 16:15:49 by emlamoth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	lens1;
	unsigned int	lens2;
	char			*newstr;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	newstr = (char *)malloc(lens1 + lens2 + 1 * (sizeof(char)));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s1, lens1);
	ft_memcpy(newstr + lens1, s2, lens2);
	newstr[lens1 + lens2] = '\0';
	return (newstr);
}
