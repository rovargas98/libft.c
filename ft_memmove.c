/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovargas <rovargas@student.42madrid.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:19:38 by rovargas          #+#    #+#             */
/*   Updated: 2023/11/22 15:56:49 by rovargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	while (len != 0)
	{
		if (dst == '\n')
			return (0);
		else
			*d++ = *s++;
		len--;
	}
}
