/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:37:52 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/09 22:43:20 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int size, char **args)
{
	int	i;
	int	j;

	j = size - 1;
	if (size > 1)
	{
		while (j >= 1)
		{
			i = 0;
			while (args[j][i])
				i++;
			write(1, args[j], i);
			write(1, "\n", 1);
			j--;
		}
	}
}
