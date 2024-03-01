/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:20:31 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/09 22:22:28 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	numero;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		numero = ft_fibonacci(index - 1);
		numero = numero + ft_fibonacci(index - 2);
	}
	return (numero);
}
/*
int main()
{
	int i;
	i = ft_fibonacci(7);
	printf("%d", i);
}
*/
