/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:00:53 by fernando          #+#    #+#             */
/*   Updated: 2023/11/03 13:04:50 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
