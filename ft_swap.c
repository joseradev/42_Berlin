/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseradev <joseradev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:44:21 by joseradev         #+#    #+#             */
/*   Updated: 2024/11/01 11:51:37 by joseradev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 4;
	y = 2;
	printf("Before: %d%d\n", x, y);
	ft_swap(&x, &y);
	printf("After: %d%d\n", x, y);

	return (0);
}
*/
