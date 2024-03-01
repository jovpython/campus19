/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:53:38 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/19 19:41:52 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

#include <unistd.h>

int	check_db(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return(1);
}

void	inter(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		i = 0;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				if (check_db(str, str[i], i) == 1)
				{
					write (1, &str[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return(0);
}

*/

/*
#include <unistd.h>

int	check_db(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return(1);
}

void	inter(char	*str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while(str[i] != '\0')
		{
			if (str[i] == str[j])
			{
				if (check_db(str, str[i], i) == 1)
				{
					write (1, &str[i], 1);
						break;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], ac[2]);
	write(1, "\n", 1);
	return(0);
}


*/


/*
#include <unistd.h>

int	check_db(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				if (check_db(str, str[i], 1) == 1)
				{
					write (1, &str[i], 1);
						break;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if(ac == 3)
		inter(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}

*/


/*
#include <unistd.h>

int	check_db(char *, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return (1);
}

void	inter(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				if (check_db(str, str[i], i) == 1)
				{
					write (1, &str[i], 1);
						break;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(str[1], str[2]);
	write (1, "\n", 1);
	return (0);
}


*/

/*
int	check_db(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return (1);
}

void	inter(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				if (check_db(str, str[i], i) == 1)
				{
					write (1, &str[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}


*/


#include <unistd.h>

int	check_db(char *str, char c, int pos)
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

void	inter(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				if (check_db(str, str[i], i) == 1)
				{
					write (1, &str[i], 1);
						break;
				}
			}
			j++;
		}
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return(0);
}

































































































































































