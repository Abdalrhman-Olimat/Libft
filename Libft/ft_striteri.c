/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:23:30 by aeleimat          #+#    #+#             */
/*   Updated: 2024/09/05 11:23:46 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, (s + i));
		++i;
	}
}
/* #include <stdio.h>

void	ft_test(unsigned int i, char *str)
	{
		*str += i;
	}

int	main()
{
	char	str[] = "HELLO";
	ft_striteri(str, ft_test);
	printf("%s", str);
} */
