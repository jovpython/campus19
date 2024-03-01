/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:41:46 by yisimayi          #+#    #+#             */
/*   Updated: 2024/03/01 08:49:04 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/*


int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return(result * sign);
}


这段代码中的操作主要是为了构建最终的整数结果。让我们来解释一下：

    result *= 10;: 在每次循环中，先将之前的结果乘以 10。
这是因为每一位数字在整数中所代表的位置是不同的，比如个位、十位、百位等，
每一位数字的实际值都是其在相应位置上的数字值乘以相应的权值
（比如个位是 1，十位是 10，百位是 100，以此类推）。
因此，在将每一位数字加到结果中之前，需要将之前的结果左移一位，即乘以 10。

    result += str[i] - '0';: 这一行代码则是将当前遍历到的数字字符转换为相应的数字值，
然后加到结果中。这里通过减去字符 '0' 来实现，
因为在 ASCII 编码中，数字字符 '0' 到 '9' 的 ASCII 值依次是 48 到 57，而 '0' 对应的值是最小的，
因此减去 '0' 就可以得到字符所代表的实际数字值。

这两行代码的组合，实现了将字符串中的每一位数字字符转换为相应的整数值，并逐步构建出最终的整数结果。




好的，让我们通过一个简单的例子来说明这段代码的工作原理。

假设我们有一个字符串 str，其内容为 "1234"。我们将使用 ft_atoi 函数将这个字符串转换为一个整数。

    初始时，result 被设置为 0。我们从字符串的第一个字符开始遍历。

    第一个字符是 '1'，其 ASCII 值为 49。我们需要将字符 '1' 转换为整数值，即 1。
这是通过 str[i] - '0' 实现的，所以 str[i] - '0' 就等于 1。
然后，将当前结果 0 乘以 10，得到 0，再加上字符 '1' 对应的数字值 1，结果为 1。

    然后，我们继续处理下一个字符 '2'。同样地，我们将当前结果 1 乘以 10，
得到 10，再加上字符 '2' 对应的数字值 2，结果为 12。

    接着，我们处理字符 '3'。将当前结果 12 乘以 10，得到 120，再加上字符 '3' 对应的数字值 3，结果为 123。

    最后，我们处理字符 '4'。将当前结果 123 乘以 10，得到 1230，再加上字符 '4' 对应的数字值 4，结果为 1234。

    字符串已经处理完毕，我们返回最终结果 1234。这个结果已经正确地将字符串 "1234" 转换为整数。

这个例子说明了在每次循环中，我们将之前的结果乘以 10，然后加上当前字符对应的数字值，以构建最终的整数结果。



*/





/*

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] > = 9 && str[i] <= 13))这段代码是在循环开始前，用来跳过字符串中的空白字符的。让我来解释一下：

    str[i] == 32: 这个条件检查当前字符是否是空格字符的 ASCII 值。空格字符的 ASCII 值是 32，所以这里检查当前字符是否等于 32。

    (str[i] >= 9 && str[i] <= 13): 这个条件检查当前字符是否是水平制表符 (ASCII 值为 9) 或者换行符 (ASCII 值为 10)，回车符 (ASCII 值为 13)。这三个字符都是空白字符，通常会在文本中被视为空白。因此，这个条件检查当前字符是否属于这三种空白字符之一。

所以，整个条件表达式 str[i] == 32 || (str[i] >= 9 && str[i] <= 13) 是在检查当前字符是否是空白字符。如果当前字符是空白字符之一，循环将继续前进到下一个字符，直到遇到第一个非空白字符为止
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0' && <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return(result * sign);
}


*/








/*

int	ft_atoi(const char *str)
{
	int	i;
	int	sgin;
	int	result;
	
	i = 0;
	sgin = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] = '-')
	{
		sgin = -1;
		i++;
	}
	else if (str[i] = '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result = str[i] - '0';
		i++;
	}
	return(result * sgin);
}


*/




/*


int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i= 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		resilt = str[i] - '0';
		i++;
	}
	return(result * sgin);
}



*/






/*

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign =	1;
	result = 0;
	while(str[i] ==32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result = str[i] - '0';
		i++;
	}
	return(str[i] * sign);
}



*/





/*

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result = str[i] - '0';
		i++;
	}
	return(str[i] * sign);
}



*/






/*

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	if(str[i] == '-')
	{
			sign = -1;
			i++;
	}
	else if(str[i] == '+')
			i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result = str[i] - '0';
		i++;
	}
	return(result * sign);
}



*/







/*

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	if(str[i] == '-')
	{
			sign = -1;
			i++;
	}
	else if (str[i] == '+')
			i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
			result *= 10;
			result += str[i] - '0';
			i++;
	}
	return(result * sign);
}

*/









/*


int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int result;

	i = 0;
	sign = 1;
	rsult = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	if(str[i] == '-')
	{
			sign = -1;
			i++;
	}
	else if(str[i] == '+')
			i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
			result *= 10;
			result = str[i] - '0';
			i++;
	}
	return(result * sign);
}



*/






/*

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	if(str[i] == '-')
	{
			sign = -1;
			i++;
	}
	else if(str[i] == '+')
			i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
			result *= 10;
			result = str[i] - '0';
			i++;
	}
	return(result *sign);
}


*/










/*


int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	if(str[i] == '-')
	{
			sign = -1;
			i++;
	}
	else if(str[i] == '+')
			i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
			result *= 10;
			result = str[i] - '0';
			i++;
	}
	return(result *sign);
}



*/







/*

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 | (str[i] >= 9 && str[i] <= 13))
			i++;
	if(str[i] == '-')
	{
			sign = -1;
			i++;
	}
	else if(str[i] == '+')
			i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
			result *= 10;
			result = str[i] - '0';
			i++;
	}
	return(result * sign);
}


*/








/*

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	if(str[i] == '-')
	{
			sign = -1;
			i++;
	}
	if(str[i] == '+')
			i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
			result *= 10;
			result = str[i] - '0';
			i++;
	}
	return(result * sign);
}



*/






/*



int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == 32 || (str[i] >=9 && str[i] <= 13))
			i++;
	if(str[i] == '-')
	{
			sign = -1;
			i++;
	}
	else if (str[i] == '+')
			i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
			result *= 10;
			result = str[i] - '0';
			i++;
	}
	return(result * sign);
}



*/






int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int result;
	
	i = 0;
	sign = 1;
	resulet = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13;))
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
			result *= 10;
			result = str[i] - '0';
			i++;
	}
	return(result *sign);
}






















































