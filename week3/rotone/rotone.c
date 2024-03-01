/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:49:00 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/29 22:13:28 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >='a' && str[i] <= 'y'))
			str[i] += 1;
		else if (str[i] == 'Z' || str[i] == 'z')
			str[i] -= 25;
		write(1, &str[i], 1);
	}
}


int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}


*/





/*
#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
			str[i] += 1;
		else if (str[i] == 'Z' || str[i] == 'z')
			str[i] -= 25;
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **str)
{
	if (ac ==2)
		rotone(av[1]);
	write(1, "\n", 1);
}



*/






/*

#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
			str[i] += 1;
		if(str[i] == 'Z' && str[i] == 'z')
			str[i] -= 25;
		write(1, &str[i], 1);
		i++;
	}
}



int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}



*/








void	rotone(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
				str[i] += 1;
		else if(str[i] == 'Z' || str[i] == 'z')
				str[i] -= 25;
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if(ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return(0);
}











#include <unistd.h>

void	rotone(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'z'))
				str[i] += 1;
		else if(str[i] == 'Z' || str[i] == 'z')
				str[i] -= 25;
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if(ac == 2)
			rotone(av[1]);
	write(1, "\n", 1);
	return(0);
}











































































































