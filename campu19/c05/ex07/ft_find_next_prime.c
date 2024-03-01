/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:55:03 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/21 14:57:41 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	numero;
	int	numeroinv;

	if (nb <= 2)
		return (2);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (ft_find_next_prime(nb + 1));
	else if (nb == 4)
		return (5);
	else
	{
		numero = 3;
		numeroinv = nb / 2;
		while (numero <= numeroinv)
		{
			if (nb % numero == 0 || nb % numeroinv == 0)
				return (ft_find_next_prime(nb + 1));
			numero += 2;
			numeroinv -= 2;
		}
	}
	return (nb);
}
/*

int main()
{
	int i;
	i = ft_find_next_prime(2147483630);
	printf("1: %d\n", i);
}
*/
