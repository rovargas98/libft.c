/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovargas < rovargas@student.42madrid.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:24:11 by rovargas          #+#    #+#             */
/*   Updated: 2024/02/19 20:56:17 by rovargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, size_t n)
{
    char *str;

    str = (char*)s;
    if(n)
        {
            while(*str++)
            {
                if(*str == c)
                    return(str);
            }
            return(NULL);
        }
    else
    return(NULL);

}