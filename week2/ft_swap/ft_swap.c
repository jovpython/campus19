/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:59:46 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/13 15:33:01 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_swap(int	*a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

#include <stdio.h>

int	main(void)
{
	int	org_a;
	int	org_b;

	org_a = 4;
	org_b = 9;
	ft_swap(&org_a, &org_b);
	printf("now_a is: %d,now_b is: %d\n",org_a, org_b);
	return(0);
}

*/


void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

#include <stdio.h>

int	main(void)
{
	int	org_a;
	int	org_b;

	org_a = 111;
	org_b = 555;
	ft_swap(&org_a, &org_b);

	printf("now_a is: %d\nnow_b is: %d\n", org_a, org_b);
	return(0);
}









































































