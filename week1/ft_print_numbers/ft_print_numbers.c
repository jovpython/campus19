/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:02:44 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/09 13:35:03 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = '0';
	while(digit <= '9')
	{
		write(1, &digit, 1);
		digit++;
	}
}

int	main(void)
{
	 ft_print_numbers();
	return(0);
}
*/




















#include <unistd.h>

void	ft_print_numbers(void)
{
	int	digit;

	digit = '0';
	while (digit <= '9')
	{
		write (1, &digit, 1);
		digit++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return(0);
}














































