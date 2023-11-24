/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovargas <rovargas@student.42madrid.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:56:22 by rovargas          #+#    #+#             */
/*   Updated: 2023/11/22 16:04:06 by rovargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//El modificador restrict es una pista para el compilador de que los datos
//accedidos a través de este puntero no se superponen con datos accesibles
//Esto puede ayudar al compilador a realizar optimizaciones.
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (char *)src;
	while (n--)
	{
		*dest++ = *source++;
	}
	return (dest);
}
