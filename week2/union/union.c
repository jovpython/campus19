/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:10:56 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/19 22:27:14 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

#include <unistd.h>

int	check_db2(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}


int	check_db1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *str, char *str1)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_db2(str, str[i], i) ==1)
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		if (check_db2(str, str1[i], i) == 1)
		{
			if (check_db1(str1, str1[i], i) == 1)
				write(1, &str[i], 1);
		}
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return(0);
}


*/


#include <unistd.h>

int	check_db2(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return(1);
}

int	check_db1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return(1);
}


void	ft_union(char *str, char *str1)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if(check_db1(str, str[i], i) == 1)
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		if(check_db2(str, str1[i]) == 1)
		{
			if(check_db1(str, str1[i], i) == 1)
				write(1, &str1[i], 1);
		}
		i++;
	}
}


int	main(int	ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}






















































































































































































































































































































































