/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:37:50 by fernando          #+#    #+#             */
/*   Updated: 2023/11/28 10:25:14 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

/* int main(void)
{
    char    c;
    
    c = '9';
    if (ft_isascii(c))
        write(1, "True\n", 5);
    else
        write(1, "False\n", 6);
    return (0);
} */
