/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:28:22 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/20 22:12:06 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i], 1);
			i++;
	return(i);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int wdlen;

	i = 0;
	j = 0;
	wdlen = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			while(av[2][j] != '\0')
			{
				if (av[1][i] == av[2][j])
				{
					wdlen++;
					break;
				}
				j++;
			}
			i++;
		}
		if(wdlen == ft_strlen(av[1]))
				ft_putstr(av[1]);
	}
	write (1, "\n", 1);
	return(0);
}


*/


/*

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}


int	main(int av, char **av)
{
	int	i;
	int	j;
	int	wdlen;

	i = 0;
	j = 0;
	wdlen = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			while (av[2][j] != '\0')
			{
				if(av[1][i] == av[2][j])
				{
					wdlen++;
					break;
				}
				j++;
			}
			i++;
		}
		if(wdlen == ft_strlen(av[1]))
			ft_putstr(ac[1])
	}
	write(1, "\n", 1);
	return(0);
}


*/




/*

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	wdlen;

	i = 0;
	j = 0;
	wdlen = 0;
	if (ac == 3)
	{
		while(av[1][i] != '\0')
		{
			while(av[2][j] != '\0')
			{
				if(av[1][i] == av[2][j])
				{
					wdlen++;
					break;
				}
				j++;
			}
			i++;
		}
		if(wdlen == ft_strlen(av[1]))
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}

*/





#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}


int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	wdlen;

	i = 0;
	j = 0;
	wdlen = 0;
	if(ac == 3)
	{
		while(av[1][i] != '\0')
		{
			while(av[2][j] != '\0')
			{
				if(str[1][i] == str[2][j])
				{
					wdlen++;
					break;
				}
				j++;
			}
			i++;
		}
		if(wdlen == ft_strlen(av[1]))
			fe_putstr(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}





























































































































































