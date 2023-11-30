/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:12:02 by fernando          #+#    #+#             */
/*   Updated: 2023/11/30 10:36:37 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	res;
	int	neg;
	int	i;

	neg = 1;
	res = 0;
	i = 0;
	while (nptr[i] == '\n' || nptr[i] == ' ' || nptr[i] == '\t')
		i++;
	if (nptr[i] == '-')
		neg *= -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * neg);
}

/* int	main(void)
{
	const char	*at = "  \t -2147483648";
	int			res;

	res = ft_atoi(at);
	printf("Mi funcion: %d\n", res);
	res = atoi(at);
	printf("Funcion original: %d\n", res);
	return (0);
}  */
