/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:13:43 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/09 22:15:20 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	numero;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	numero = nb;
	power--;
	while (power > 0)
	{
		numero = numero * nb;
		power--;
	}
	return (numero);
}

/*
int main()
{
	int i;
	i = ft_recursive_factorial(2, 3);
	printf("%d", i);
	return 0;
}
*/
