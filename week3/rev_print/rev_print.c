/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:44:24 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/29 17:11:52 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char	*ft_rev_print(char *str)
{
	int	i;
	
	i = ft_strlen(str);
	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}


int	main()
{
	char str[] = " ";
	ft_rev_print(str);
}



*/






/*

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}


char	*ft_rev_print (char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}


int	main()
{
	char str[] = "jovlan aka";
	ft_rev_print(str);
}



*/






/*

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}



char	*ft_rev_print(char	*str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}


*/




/*

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}


void	*ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i --;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}


*/





/*

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}



char	*ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i -= 1;
	while(i >= 0)
	{
		write(1, &str[i]), 1);
		i--;
	}
	return(str);
}



*/





#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char	*ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}















































































