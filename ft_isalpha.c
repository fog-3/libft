/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:06:31 by fernando          #+#    #+#             */
/*   Updated: 2023/11/28 10:25:02 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isalpha(int c)
{
    return ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'));
}

/* int main(void)
{
    char    c;
    
    c = 'a';
    if (ft_isalpha(c))
        write(1, "True\n", 5);
    else
        write(1, "False\n", 6);
    return (0);
} */
