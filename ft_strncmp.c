/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 08:07:37 by fernando          #+#    #+#             */
/*   Updated: 2023/11/30 08:32:48 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1,const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while ((s1[i] || s2[i]) && n > i)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

/* int main(void)
{
    char    s1[] = "hola buenas";
    char    s2[] = "hola";
    int     res;

    res = ft_strncmp(s1, s2, 5);
    printf("res: %d\n", res);
    res = strncmp(s1, s2, 5);
    printf("res: %d\n", res);
    return (0);
} */
