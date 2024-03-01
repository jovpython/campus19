/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:26:36 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/09 22:28:05 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	numero;
	int	numeroinv;

	if (nb <= 1 || nb == 4)
		return (0);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (0);
	numero = 3;
	numeroinv = nb / 2;
	while (numero <= numeroinv)
	{
		if (nb % numero == 0 || nb % numero == 0)
			return (0);
		numero += 2;
		numeroinv -= 2;
	}
	return (1);
}

/*
int main()
{
	int i;
	i = ft_is_prime(2147483647);
	printf("I: %d\n", i);
}
*/
