/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovargas <rovargas@student.42madrid.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 00:36:02 by rovargas          #+#    #+#             */
/*   Updated: 2023/11/24 16:59:31 by rovargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int t;

	while (*haystack)
	{
		t = 0;
		while (haystack[t] == *needle)
		{
			t++;
			needle++;
		}
		if (*needle == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
