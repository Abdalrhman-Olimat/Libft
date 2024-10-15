/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:14:40 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/27 12:46:59 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_char;
	const unsigned char	*src_char;

	if (dest == NULL && src == NULL)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	src_char = (unsigned char *)src;
	dest_char = (unsigned char *)dest;
	while (n--)
		dest_char[n] = src_char[n];
	return (dest);
}
/*
int main ()
{
	char s[]="ABCDEFGHIJ";
	ft_memmove(s+2,s+4,4);
	printf("%s",s);
	return 0;
}*/
