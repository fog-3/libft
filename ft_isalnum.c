/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:27:15 by fernando          #+#    #+#             */
/*   Updated: 2023/11/28 10:13:54 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    int res;

    res = 0;
    if (((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))||(c >= '0' && c <= '9'))
        res = 1;
    return (res);
}

/* int main(void)
{
    char    c;
    
    c = '.';
    if (ft_isalnum(c))
        write(1, "True\n", 5);
    else
        write(1, "False\n", 6);
    return (0);
} */
