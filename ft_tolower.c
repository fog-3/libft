/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:57:35 by fernando          #+#    #+#             */
/*   Updated: 2023/11/28 11:22:39 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

/* int main(void)
{
    char    c;
    
    c = 'a';
    c = ft_tolower(c);
    write(1, &c, 1);
    write(1, "\n", 1);
    return (0);
} */
