/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:33:10 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/29 20:25:47 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}



char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	int tmp;
	
	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i )
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
}


*/






/*

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}


char	*ft_strrev(char *str)
{
	int	i;
	int	end;
	int	tmp;

	i = 0;
	end = ft_strlen(str) -1;
	while(len > i)
	{
		tmp = str[i];
		str[i] = str[end];
		str[end] = tmp;
		i++;
		end--;
	}
	return(str);
}


*/




/*


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
		i++;
	return(i);
}


char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	int	tmp;

	i = 0;
	len	= ft_strlen(str) -1;
	while(len > i )
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
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


char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	int	tmp;

	i = 0;
	len = ft_strlen(str) -1;
	while(i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
}



*/








/*

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}


char	*ft_strrev(char *str)
{
		int	i;
		int	len;
		int	tmp;

		i = 0;
		len = ft_strlen(str) -1;
		while(i < len)
		{
			tmp = str[i];
			str[i] = str[len];
			str[len] = tmp;
			i++;
			len--;
		}
		return(str);
}


*/









/*

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}


char	*ft_strrev(char *str)
{
		int	i;
		int	len;
		int	tmp;

		i = 0;
		len = ft_strlen(str) -1;
		while(i < len)
		{
			tmp = str[i];
			str[i] = str[len];
			str[len] = tmp;
			i++;
			len--;
		}
		return(str);
}


*/









int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
			i++;
	return(i);
}



char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	int	tmp;

	i = 0;
	len = fe_strlen(str) -1;
	while(i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
}
































































