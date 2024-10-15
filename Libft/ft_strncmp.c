/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:56:31 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/28 08:59:07 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((s1[i]) || (s2[i])) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	a[] = "abcde";
	char	b[] = "abcdefg";
	char	c[] = "hellofriend";
	char	d[] = "helloworld";
	char	e[] = "123456";
	char	f[] = "1098";

	printf("%i\n", ft_strncmp(a, b, 6));
	printf("%i\n", strncmp(a, b, 6));
	printf("%i\n", ft_strncmp(c, d, 5));
	printf("%i\n", strncmp(c, d, 5));
	printf("%i\n", ft_strncmp(e, f, 4));
	printf("%i\n", strncmp(e, f, 4));

}*/
