/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 21:42:28 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/20 22:52:11 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

这个程序需要编写一个函数，将字符串参数转换为整数（int类型）并返回。

该函数的功能类似于标准的atoi(const char *str)函数，请参考相关文档。

函数的声明如下：

c

int ft_atoi(const char *str);

该函数需要将一个字符串转换为整数，并返回这个整数值。
User
标准的atoi(const char *str)函数
ChatGPT

标准的 atoi(const char *str) 函数是一个C标准库函数，它将一个字符串转换为整数（int类型）并返回。

它的功能是：

    从字符串开头开始扫描，跳过前导空白字符（空格、制表符、换行符等）。
    当遇到数字字符（0-9）时，将其转换为整数并累加到结果中。
    如果遇到正负号字符（'+'或'-'），则根据符号设置结果的正负性。
    如果遇到非数字字符或字符串结束符（'\0'），则停止扫描并返回结果。

例如：

    "123" 被转换为整数 123。
    "-456" 被转换为整数 -456。
    "789abc" 被转换为整数 789，因为遇到非数字字符'a'时停止扫描。

需要注意的是，atoi 函数不会处理非数字字符后面的字符，因此 "123abc" 会被转换为整数 123，而后面的'a'和'b'会被忽略。


/*

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

*/







/*

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] && ((str[c] >= 9 && str[c] <= 13) || str[c] == 32))
		c++;
	while (str[c] && (str[c] == '+' || str[c] == '-'))
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] && (str[c] >= '0' && str[c] <= '9'))
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
}

*/


/*
#include <stdio.h>
int	main()
{
	int	n;

	n = ft_atoi("");//-12066
	printf("%d", n);
}*/




























































































































