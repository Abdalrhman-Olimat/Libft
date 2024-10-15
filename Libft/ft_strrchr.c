/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:23:53 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/27 16:41:46 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char) c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if ((char) c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "";
	char	c = 'a';
	printf("%s",ft_strrchr(str, c));
}*/
