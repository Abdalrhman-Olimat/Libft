/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:06:35 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/27 12:50:43 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
/*
int main ()
{
	
    char str[] = "ABCDEFGHIJ";
        char a[] = "ABCDEFGHIJ";
    // Overlapping regions: Copying "World" to the beginning of the string
    ft_memcpy(str + 2, str + 4, 4);  // This should move "World" to the beginning
    memcpy(a + 2, a + 4, 4);
    printf("1Result: %s\n", str);  // Expected output: "World! World"
        printf("2Result: %s\n", a);  // Expected output: "World! World"
    return 0;


}*/
