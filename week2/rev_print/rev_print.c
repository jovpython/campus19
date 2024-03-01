/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:37:38 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/17 21:05:40 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>


char	*ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while(0 <= str[i] && str[i] < '\0')
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
	
}

int	main(void)
{
	ft_rev_print("abcde");
	return(0);
}

*/


/*
char    *ft_rev_print(char *str)
{
	int	i;

	i = 0;	
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (str);	
}


int main(void)
{
	ft_rev_print("abcde");
	return(0);
}

*/


/*
#include <unistd.h>
#include <stdio.h>

char	*ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (str);
}

int	main(void)
{
	ft_rev_print("jovlan");
	return (0);
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
	return (i);
}

char	*ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	return(str);
}

int	main()
{
	char str[] = "abcdefgh ijk";
	ft_rev_print(str);
}

*/


/*
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}

int	main()
{
	char str[] = "jovlan say hi";
	ft_rev_print(str);
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
		write (1, &str[i], 1);
		i--;
	}
	return (str);
}


int	main()
{
	char str[] = "abcdef ghijk";
	ft_rev_print(str);
}









































































































































































