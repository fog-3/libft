/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:17:41 by fernando          #+#    #+#             */
/*   Updated: 2023/11/30 10:10:50 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	j;

	i = 0;
	while (big[i])
	{
		j = 0;
		while (big[i] == little[j] && j < len && little[j])
		{
			j++;
			i++;
		}
		if (little[j] == '\0' || j >= len)
		{
			i -= j;
			return ((char *)&big[i]);
		}
		if (j > 0 && i > 0)
			i--;
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char *largestring = "Foo BaBar Baz";
	const char *smallstring = "Bar";
	char	*ptr1;
	char	*ptr2;

	ptr1 = ft_strnstr(largestring, smallstring, 2);
	//ptr2 = strnstr(largestring, smallstring, 4);
	printf("Mi funcion: %s\n", ptr1);
	//printf("Funcion original: %s\n", ptr2);
	return (0);
} */
