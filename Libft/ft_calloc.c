/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:54:42 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/28 09:56:47 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n_elem, size_t size)
{
	void	*ptr;

	ptr = malloc(n_elem * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * n_elem);
	return (ptr);
}
