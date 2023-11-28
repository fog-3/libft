/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:00:53 by fernando          #+#    #+#             */
/*   Updated: 2023/11/28 10:52:21 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strchr(char *s, int c)
{
    int i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    if (s[i] == '\0')
        return (0);
    return (&s[i]);
}

/* int main(void)
{
    char    str[] = "Vamooaoo";
    int     n = 97;
    
    printf("%s\n", ft_strchr(str, n));
    printf("%s\n", strchr(str, n));
    return (0);
} */
