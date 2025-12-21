/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Luiz Lobato Jr <llobatoj@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 10:26:06 by llobatoj          #+#    #+#             */
/*   Updated: 2025/12/21 10:26:06 by llobatoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	while ()
	{
		ft_putchar(comb[i]);
		i++;
	}
	if (comb[0] != '9' - n + 1)
		write(1, ", ", 2);
}

int	main()
{
	ft_print_combn(2);
	return (0);
}

