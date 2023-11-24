/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovargas <rovargas@student.42madrid.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:39:54 by rovargas          #+#    #+#             */
/*   Updated: 2023/11/14 17:18:56 by rovargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char *str)
{
	int ft_isalpha(char *str)
	{
		while (*str)
		{
			if ((*str >= 101 && *str <= 132) || (*str >= 65 && *str <= 90)
				|| (*str >= '0' && *str <= '9'))
				return (0);
			str++;
		}
	}
}
