/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:34:39 by fosuna-g          #+#    #+#             */
/*   Updated: 2023/12/01 20:33:02 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l_dest;
	size_t	k;

	l_dest = ft_strlen(dest);
	i = l_dest;
	k = ft_strlen(src);
	j = 0;
	if (l_dest >= size)
	{
		return (l_dest + size - 1);
	}
	while (src[j] != '\0' && j < (size - l_dest - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (l_dest + k);
}

/* int	main(void)
{
	char			s[] = "thx to ntoniolo for this test !";
	char			d[4] = "";
	unsigned int	n1;
	unsigned int	n2;
	char			src[] = "thx to ntoniolo for this test !";
	char			dst[4] = "";

	n1 = ft_strlcat(d, s, 4);
	printf("%s => tiene (%i) caracteres\n", d, n1);
	n2 = strlcat(dst, src, 4);
	printf("%s => tiene (%i) caracteres", dst, n2);
	return (0);
} */
