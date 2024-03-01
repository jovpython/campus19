/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:55:47 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/06 23:08:45 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *a / *b;
	*b = i % *b;
}

/*
int	main()
{
	int	a = 10;
	int	b = 3;

	ft_u;timate_div_mod(&a, &b);

	printf("Division result: %d\n", a);
	printf("Modulus result: %d\n", b);

	return	0;
}
*/
