/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:38:59 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/06 22:54:21 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main()
{
	int	a = 10;
	int	b = 3;
	int	result_div;
	int	result_mod;

	ft_div_mod(int a, int b, int *div, int *mod);

	printf("Division result: %d\n", result_div);
	printf("Modulus result: %d\n", result_mod);

	return	0;
}
*/
