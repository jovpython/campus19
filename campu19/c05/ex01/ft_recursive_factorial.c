/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:06:32 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/09 22:08:03 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	numero;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 2)
	{
		numero = ft_recursive_factorial(nb - 1);
		numero = numero * nb;
		nb--;
	}
	else
		numero = nb;
	return (numero);
}

/*

int main()
{
	int i;
	i = ft_recursive_factorial(3);
	printf("%d", i);
}
*/
