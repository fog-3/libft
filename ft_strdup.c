/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:49:17 by fernando          #+#    #+#             */
/*   Updated: 2023/12/01 21:02:30 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		size;
	int		i;

	size = (int)ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (0);
	i = 0;
	while (size > 0)
	{
		res[i] = s[i];
		i++;
		size--;
	}
	res[i] = '\0';
	return (res);
}
