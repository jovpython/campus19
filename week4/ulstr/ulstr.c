/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:09:03 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/29 20:41:20 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
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
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
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
	if(ac ==2 )
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
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
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
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
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;
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
		while(av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
					av[1][i] += 32;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
					av[1][i] -= 32;
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

int	main(int ac,char **av)
{
	int	i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
					av[1][i] += 32;
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
					av[1][i] -= 32;
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
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
					av[1][i] += 32;
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
					av[1][i] -= 32;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}




*/







/*

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
					av[1][i] += 32;
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
					av[1][i] -= 32;
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
	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
					av[1][i] += 32;
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
					av[1][i] -= 32;
			write(1, &av[1][i], 1);
			i++;		
		}
	}
	write(1, "\n", 1)
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
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
					av[1][i] += 32;
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
					av[1][i] -= 32;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
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
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
					av[1][i] += 32;
			else if(av[1][i] >= 'a' && av[1][i] <= 'z')
					av[1][i] -= 32;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}




























































