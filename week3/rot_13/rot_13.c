/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:45:16 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/29 22:05:52 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

#include <unistd.h>

void	rot13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		else if((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac ==2)
		rot13(av[1]);
	write(1, "\n", 1);
}

*/





/*

#include <unistd.h>

void	rot13(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'M' || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}



int	main(int ac, char **av)
{
	if (ac == 2)
		rot13(av[1]);
	write(1, "\n", 1);
}


*/





/*

void	rot13(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac ==2)
		rot13(av[1]);
	write(1, "\n", 1);
}



*/





/*

#include <unistd.h>

void	rot13(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		if((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac ==2)
		rot13(av[1]);
	write(1, "\n", 1);
}


*/








/*

void	rot13(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		else if((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **str)
{
	if (ac == 2)
		rot13(av[1]);
	write(1, "\n", 1);
}


*/



















#include <unistd.h>

void	rot13(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
				str[i] += 13;
		else if((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
				str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}




int	main(int ac, char **av)
{
	if(ac ==2)
		rot13(av[1]);
	write(1, "\n", 1);
	return(0);
}











#include <unistd.h>






void	rot_13(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
				str[i] += 13;
		else if((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
				str -= 13;
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if(ac == 2)
			ret_13(av[1]);
	write(1, "\n", 1);
	return(0);
}


























































































