/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:18:58 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/28 11:57:16 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)
		|| (a >= '0' && a <= '9' ))
		return (1);
	return (0);
}
/*
int main ()
{
        char    c;

        c = '?';
        if(ft_isalnum(c))
        {
                printf("%d",ft_isalnum(c));
                printf("\nYes");
        }
        else
        {       
                printf("%d",ft_isalnum(c));
                printf("\nNO");
        }
        return 0;
}*/
