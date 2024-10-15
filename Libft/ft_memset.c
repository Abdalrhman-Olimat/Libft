/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:04:28 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/25 19:47:35 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}
/*int main ()
{
	char a[10]="0123456789";
	int i=0;
	ft_memset(a+2,'a',7);
	while(i < 10)
	{
		printf("%c",a[i]);
		i++;
	}
	return 0;
}*/
