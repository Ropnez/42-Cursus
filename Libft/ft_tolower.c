/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:06:26 by buryilma          #+#    #+#             */
/*   Updated: 2022/12/29 02:02:07 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/* #include <stdio.h>
#include <ctype.h>
 int main() {
    char c;
    c = 'm';
    printf("%c -> %c", c, ft_tolower(c));
    c = 'D';
    printf("\n%c -> %c", c, ft_tolower(c));
    c = '9';
    printf("\n%c -> %c", c, ft_tolower(c));
    return 0;
	} */