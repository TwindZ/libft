/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlamoth <emlamoth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:38:17 by emlamoth          #+#    #+#             */
/*   Updated: 2023/02/22 10:48:53 by emlamoth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The strdup() function returns a pointer to a new string which is
a duplicate of the string <s>.  Memory for the new string is
obtained with malloc(3), and can be freed with free(3).*/
char	*ft_strdup(const char *s)
{
	void	*str;

	str = malloc((sizeof(char)) * ft_strlen(s) + 1);
	if(!str)
		return(NULL);
	str = ft_memcpy(str, s, ft_strlen(s) + 1);
	return (str);
}
