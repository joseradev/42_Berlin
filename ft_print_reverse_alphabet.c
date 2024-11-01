/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseradev <joseradev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:54:58 by joseradev         #+#    #+#             */
/*   Updated: 2024/11/01 11:41:40 by joseradev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	rev_alpha;

	rev_alpha = 'z';
	while (rev_alpha >= 'a')
	{
		ft_putchar(rev_alpha);
		rev_alpha--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');

	return (0);
}
*/
