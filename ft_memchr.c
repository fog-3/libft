/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 08:36:23 by fernando          #+#    #+#             */
/*   Updated: 2023/11/30 09:01:41 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	s1[] = "hola";
	char	c = 'c';
	size_t	n = 5;
	
	printf("%s\n", (char *)ft_memchr(s1, c, n));
	printf("%s\n", (char *)memchr(s1, c, n));
	return (0);
} */
