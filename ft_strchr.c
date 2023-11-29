/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fosuna-g <fosuna-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:00:53 by fernando          #+#    #+#             */
/*   Updated: 2023/11/29 21:35:41 by fosuna-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)s;
	while (res[i] && res[i] != c)
		i++;
	if (res[i] == '\0')
		return (0);
	return (&res[i]);
}

/* int main(void)
{
	char    str[] = "Vamooaoo";
	int     n = 97;
	
	printf("%s\n", ft_strchr(str, n));
	printf("%s\n", strchr(str, n));
	return (0);
} */
