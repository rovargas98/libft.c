/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovargas <rovargas@student.42madrid.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:59:57 by rovargas          #+#    #+#             */
/*   Updated: 2023/11/24 16:59:35 by rovargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    int f;
    char *a;

    f=0;
    while(*s++)
        f++;
    while(f != 0)
    {
        if(*s == c)
          return((char*)s);
        f--;
        *s--;
    }
    return(NULL);
}
