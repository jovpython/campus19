/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:53:07 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/09 22:03:41 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	numero;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	numero = nb;
	nb--;
	while (nb > 1)
	{
		numero = numero * nb;
		nb--;
	}
	return (numero);
}

/*

int	main()
{
	int i;
	i = ft_iterative_factorial(3);
	printf("%d", i);

}
*/
