/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:21:38 by yisimayi          #+#    #+#             */
/*   Updated: 2024/03/01 09:01:07 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/*

#include <unistd.h>

void	ft_write_number(int	number)
{
		if(number > 9)
			ft_write_number(number / 10);
		write(1, &"0123456789"[number % 10], 1);
}


int		main(void)
{
		int	number;

		number = 1;
		while(number <= 100)
		{
				if(number % 3 == 0 && number % 5 == 0)
					write(1, "fizzbuzz", 8);
				else if(number % 3 == 0)
					write(1, "fizz", 4);
				else if(number % 5 == 0)
					write(1, "buzz", 4);
				else
					ft_write_number(number);
				write(1, "\n", 1);
				number++;
	}
}

*/





/*

#include <unistd.h>

void	ft_write_number(int number)
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}


int	main(void)
{
	int	number;

	number = 1;
	while(number <= 100)
	{
		if(number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else
				ft_write_number(number);
		write(1, "\n", 1);
		number++;
	}
}



*/






/*


#include <unistd.h>

int	main()
{
	int	number;

	number	= 1;
	while(number <= 100)
	{
		if(number % 3 == 0 && number % 5== 0)
				write(1, "fizzbuzz", 8);
		else if(number % 3 == 0)
				write(1, "fizz", 4);
		else if(number % 5 == 0)
				write(1, "buzz", 4);
		else
				write(1, &number, 1);
		write(1, "\n", 1);
		number++;
	}
	return(0);
}



*/





/*

#include <unistd.h>

void	ft_number(int number)
{
		if(number > 9)
				ft_number(number/10);
		write(1, &"0123456789"[number % 10], 1);
}


int	main(void)
{
	int	number;

	number = 1;
	while(number < 100)
	{
			if(number % 3 == 0 && number % 5 == 0)
					write(1, "fizzbuzz", 8);
			else if(number % 3 == 0)
					write(1, "fizz", 4);
			else if (number % 5 == 0)
					write(1, "buzz", 4);
			else
					ft_number(number);
			write(1, "\n", 1);
			number++;
	}
}


*/












/*

#include <unistd.h>

int	main(void)
{
	write(1, "fizz\n", 5);
	write(1, "buzz\n", 5);
	write(1, "fizzbuzz\n", 9);
}



*/

















/*

#include <unistd.h>

 void	ft_number(int number)
{
	if(number < 9)
			ft_number(number / 10);
	write(1, "0123456789"[number % 10], 1);
}


int	main(void)
{
	int	number;

	number = 1;
	while(number <= 100)
	{
			if(number % 3 == 0 & number % 5 == 0)
					write(1, "fizzbuzz", 8);
			else if(number % 3 == 0)
					write(1, "fizz", 4);
			else if(number % 5 == 0 )
					write(1, "buzz", 4);
			else
					ft_number(number);
			write(1, "\n", 1);
			number++;
	}
}

*/







/*

#include <unistd.h>

void	ft_number(int number)
{
	if(number > 9)
			ft_number(number / 10);
	write(1, "0123456789"[number % 10], 1);
}


int	main(void)
{
	int	number;

	number = 1;
	while(number <= 100)
	{
		if(number % 3 == 0 && number % 5 == 0)
				write(1, "fizzbuzz", 8);
		else if(number % 3 == 0)
				write(1, "fizz", 4);
		else if(number % 5 == 0)
				write(1, "buzz", 4);
		else
				ft_number(number);
		write(1, "\n", 1);
		number++;
	}
}


*/







/*


void	ft_number(int number)
{
	if(number > 9)
			ft_number(number / 10);
	write(1, "0123456789"[number % 10],1);
}


int	main(void)
{
	int	number;

	number = 1;
	while(number < 100)
	{
		if(number % 3 == 0 && number % 5 == 0)
				write(1, "fizzbuzz", 8);
		else if(number % 3 == 0)
				write(1, "fizz", 4);
		else if(number % 5 == 0)
				write(1, "buzz", 4);
		else
				ft_number(number);		
		write(1, "\n", 1);
		number++;
	}
}


*/








void	ft_number(int number)
{
		if(number > 9)
				ft_number(number / 10);	
		write(1, "0123456789"[number % 10], 1);
}


int	main(void)
{
	int	number;

	number = 1;
	while( number < 100)
	{
		if(number %3 == 0 && number % 5 == 0)
				write(1, "fizzbuzz", 8);
		else if(number % 3 == 0)
				write(1, "fizz", 4);
		else if(number % 5 == 0)
				write(1, "buzz", 4);
		else
				ft_number(number);
		write(1, "\n", 1);
		number++;
	}
}





















#include <unistd.h>

void	ft_number(int number)
{
		if(number > 9)
				ft_number(number / 10);
		write(1, "0123456789"[number % 10], 1);
}


int	main(void)
{
	int	number;

	number = 1;
	while(number <= 100)
	{
		if(number % 3 == 0 && number % 5 == 0)
				write(1, "fizzbuzz", 8);
		else if(number % 3 == 0)
				write(1, "fizz", 1);
		else if(number % 5 == 0)
				write(1, "buzz", 4);
		else
				ft_number(number);
		write(1, "\n", 1);
		number++;
	}
}











void	number(int number)
{
	if(number > 9)
		number(number / 10);
	write(1, "0123456789"[number % 10], 1);
}

int	main(void)
{
	int	number;

	number = 1;
	while(number <= 100)
	{
		if(number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		elseif
		else if
		else
				ft_number(number);
		write(1, "\n", 1);
		number++;
	}
}











































































