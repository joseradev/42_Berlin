/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseradev <joseradev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:59:20 by joseradev         #+#    #+#             */
/*   Updated: 2024/11/01 16:39:24 by joseradev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, sizeof(char));
		str++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "Eat, Sleep, Code, Repeat!";
	ft_putstr(str);
	write(1, "\n", 1);

	return (0);
}
*/
