/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:24:43 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/06 23:26:39 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	a = 0;
	while (a < size)
	{
		i = tab[size - 1 - a];
		tab[size - 1 - a] = tab[a];
		tab[a] = i;
		a++;
		if (a >= size - 1 - a)
		{
			break ;
		}
	}	
}
