/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frist_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:09:54 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/29 21:36:35 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

#include <unistd.h>

int	main(int ac, char *av)
{
	int	i;

	i = 0;
	if(ac == 2)
	{
		while (av[1][i] == 32 || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0' && av[1][i] != 32 && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}


*/





/*
#include <unistd.h>

int	main(int ac, char *str)
{
	int	i;
	i = 0;
	if (ac ==2)
	{
		while(av[1][i] == 32 || av[1][i] == '\t')
			i++;
		while(av[1][i] != '\0' && av[1][i] != 32 && av[1][i] != '\t')
		{
			write(1, &str[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}


*/





/*

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] == '\t' || av[1][i] == 32)
			i++;
		while(av[1][i] != '\0' && av[1][i] != '\t' && av[1][i] !+ 32)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}


*/



/*

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i] == '\t' || av[1][i] == 32)
			i++;
		while(av[1][i] != '\0' && av[1][i] != '\t' && av[1][i] != 32)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}


*/



/*

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if(ac ==2)
	{
		while(av[1][i] == '\t' || av[1][i] == 32)
			i++;
		while(av[1][i] != '\0' && av[1][i] != '\t' && av[1][i] != 32)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1)
	return(0);
}


*/










#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] == 32 || av[1][i] == '\t')
				i++;
		while(av[1][i] != '\0' && av[1][i] != 32 && av[1][i] != '\t')
		{
				write(1, &av[1][i], 1);
				i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}





#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] == 32 || av[1][i] == '\t')
				i++;
		while(av[1][i] != '\0' && av[1][i] != 32 && av[1][i] != '\t')
		{
				write(1, &av[1][i], 1);
				i++;
		}
	}
	}
	write(1, "\n", 1);
	return(0);
}































































































