/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovargas <rovargas@student.42madrid.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:21:15 by rovargas          #+#    #+#             */
/*   Updated: 2023/11/22 16:04:24 by rovargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*f;
	int		cont;

	f = (char *)str;
	cont = 0;
	if (str == NULL || n == 0)
		return (NULL);
	while (n--)
	{
		f[cont] = c;
		cont++;
	}
}
