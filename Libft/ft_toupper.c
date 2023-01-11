/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:06:26 by buryilma          #+#    #+#             */
/*   Updated: 2022/12/29 02:02:40 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/* #include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));
    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));
    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));
    return 0;
} */