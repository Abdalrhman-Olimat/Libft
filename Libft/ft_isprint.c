/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeleimat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:30:54 by aeleimat          #+#    #+#             */
/*   Updated: 2024/08/25 17:31:31 by aeleimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int main ()
{
        char    c;

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
