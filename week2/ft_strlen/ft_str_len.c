/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:15:06 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/13 14:57:33 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
*/

/*
int	ft_strlen(char *str)
{
	int	i;

	for (i = 0; str[i]; i++);
	return (i);
}

int	main(void)
{
	printf("string len is: %i\n", ft_strlen("This is a string\n"));
}*/

/*
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int	main(void)
{
	printf("string len is: %i\n", ft_strlen("this is jovlan\n"));
}

*/

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int	main(void)
{
	printf("string len is:%i\n", ft_strlen("this is from campus!"));
}






















































































