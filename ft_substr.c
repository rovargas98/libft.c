/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovargas <rovargas@student.42madrid.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:59:25 by rovargas          #+#    #+#             */
/*   Updated: 2023/11/14 16:58:23 by rovargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int		c;

	c = 0;
	substring = malloc(len + 1);
	if (s == NULL || start < 0 || len < 0 || substring == NULL)
	{
		return (NULL);
	}
	while (len--)
	{
		substring[c++] = s[start++];
	}
	substring[c] = '\0';
	return (substring);
}
