/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Luiz Lobato Jr <llobatoj@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 23:41:25 by llobatoj          #+#    #+#             */
/*   Updated: 2025/12/20 23:41:25 by llobatoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while(number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
int	main ()
{
    ft_print_numbers();
    return (0);
}
