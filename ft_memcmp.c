/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:03:44 by fernando          #+#    #+#             */
/*   Updated: 2023/11/30 09:15:47 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2 , size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;
	
	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while ((str1[i] || str1[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char    s1[] = "hola buenas";
	char    s2[] = "hola buenas";
	int     res;

	res = ft_memcmp(s1, s2, 13);
	printf("res: %d\n", res);
	res = memcmp(s1, s2, 13);
	printf("res: %d\n", res);
	return (0);
} */
