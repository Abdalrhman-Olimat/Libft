/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:57:22 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/27 12:49:27 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	return (0);
}
/*
int main ()
{
	int	c;

	c = 'a';
	if(isalpha(c))
	{
		printf("%d",isalpha(c));
		printf("\nYes");
	}
	else
	{	
		printf("%d",isalpha(c));
		printf("\nNO");
	}
	return 0;
}
*/
