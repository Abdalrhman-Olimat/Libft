/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:59:51 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/28 10:00:06 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	size;

	size = ft_strlen(str) + 1;
	dup = malloc(size);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, str, size);
	return (dup);
}

/* 

int	main(void)
{
	char	*src;
	char	*dup;

	src = "abdalrhman";
	dup = "";

	printf("%s", dup);
	dup = ft_strdup(src);
	printf("%s", dup);
} */
