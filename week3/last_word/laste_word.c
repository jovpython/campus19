/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   laste_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:42:52 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/29 21:54:33 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*


#include <unistd.h>

void	laste_word(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while(i > 0)
	{
		if(str[i] == '\t' || str[i] == 32)
				break;
		i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != '\t' && str[i] != 32)
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 2)
		laste_word(av[1]);
	write(1, "\n", 1);
}



*/






/*

void	laste_word(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while(i > 0)
	{
		if (str[i] == '\t' || str[i] == 32)
			break;
		i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != '\t' && str[i] != 32)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		laste_word(av[1]);
	write(1, "\n", 1);
}


*/







/*

void	laste_word(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while( i > 0)
	{
		if (str[i] == '\t' || str[i] == 32)
				break;
		i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != '\t' && str[i] != 32)
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac ==2 )
		laste_word(av[1]);
	write(1, "\n", 1);
}


*/







/*

void	laste_word(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while(i > 0)
	{
		if(str[i] == '\t' || str[i] == 32)
			break;
		i--;
	}
	i++;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != 32)
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char *str)
{
	if (ac == 2)
		laste_word(av[1]);
	write(1, "\n", 1);
}


*/







/*
void	laste_word(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while(i > 0)
	{
		if (str[i] == '\t' || str[i] == 32)
			break;
		i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != '\t' && str[i] != 32)
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac ==2)
		laste_word(av[1]);
	write(1, "\n", 1);
}


*/





/*

void	laste_word(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while(i > 0)
	{
		if (str[i] == '\t' || str[i] == 32)
			break;
		i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != '\t' && str[i] != 32)
	{
		write(1, &str[i], 1);
		i++;
	}
}



int	main(int ac, char **av)
{
	if(ac == 2)
		laste_word(av[1]);
	write(1, "\n", 1);
}


*/




/*

void	last_word(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while(i > 0)
	{
		if(str[i] == '\t || str[i] ==32)
			break;
		i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != '\t' && str[i] != 32)
	{	write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char &&str)
{
	if(ac == 2)
		laste_word(av[1]);
	write(1, "\n", 1);
}


*/







/*

void	last_word(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0)
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while(i > 0)
	{
		if(str[i] == '\t' || str[i] == 32)
			break;
		i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != '\t' && str[i] != 32)
	{
		write(1, &str[i], 1);
		i++;
	}
}



int	main(int ac, char **av)
{
	if(ac ==2)
		last_word(av[1]);
	write(1, "\n", 1);
}



*/









/*


#include <unistd.h>

void	last_wd(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
			i++;
	i--;
	while( str[i] == 32 || str[i] == '\t')
			i--;
	while(i > 0)
	{
		if(str[i] == 32 || str[i] == '\t')
				break;
		i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != 32 && str[i] != '\t')
	{
			write(1, &str[i], 1);
			i++;
	}
}




int	main(int ac, char **av)
{
	if(ac == 2)
			last_wd(av[1]);
	write(1, "\n", 1);
	return(0);
}

*/






/*

#include <unistd.h>





void	last_wd(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
			i++;
	i--;
	while(str[i] == 32 || str[i] == '\t')
			i--;
	while (i > 0)
	{
			if(str[i] == 32 || str[i] == '\t')
					break;
			i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != 32 && str[i] != '\t')
	{
			write(1, &str[i], 1);
			i++;
	}
	
}


int	main(int ac, char **av)
{
	if(ac == 2)
			last_wd(av[1]);
	write(1, "\n", 1);
	return(0);
}




*/









#include <unistd.h>

void	ft_last_wd(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
			i++;
	i -= 1;
	while(str[i] == 32 || str[i] == '\t')
			i--;
	while(i > 0)
	{
			if(str[i] == 32 | str[i] == '\t')
					break;
			i--;
	}
	i++;
	while(str[i] != '\0' && str[i] != 32 str[i] != '\t')
	{
			write(1, &str[i], 1);
			i++;
	}
}



int	main(int ac, char **av)
{
	if(ac == 2)
			ft_last_wd(av[1]);
	write(1, "\n", 1);
	return(0);
}































































