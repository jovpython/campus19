/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:23:36 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/09 22:24:49 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	num;

	num = 1;
	if (nb == 0)
		return (0);
	while (nb > num * num)
		num++;
	if (nb == num * num)
		return (num);
	else
		return (0);
}
/*
int main (void)
{
	printf("%d\n",ft_sqrt(1));
}
*/
