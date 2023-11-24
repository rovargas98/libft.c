/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovargas <rovargas@student.42madrid.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:50:06 by rovargas          #+#    #+#             */
/*   Updated: 2023/11/24 16:59:47 by rovargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *u;
    char *d;

    u = (char *)s1;
    d = (char *)s2;
    
    while (n > 0 && u++ && d++)
    {
        if(*u == *d)
          n--;
        else
        {
          return (*u -*d);
        }
    }
    return (*u-*d);
} 
