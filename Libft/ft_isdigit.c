/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:31:03 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/25 15:06:01 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

/*int main ()
{
	char	c;

	c = '1';
	//printf("%d",isdigit(c));

	if(ft_isdigit(c))
	{
		printf("%d",ft_isdigit(c));
		printf("\nYes");
	}
	else
	{	
		printf("%d",ft_isdigit(c));
		printf("\nNO");
	}

	return 0;
}*/
