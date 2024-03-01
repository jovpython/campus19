/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:00:25 by yisimayi          #+#    #+#             */
/*   Updated: 2024/03/01 08:43:50 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

Assignment name : union // 任务名称：union

Expected files : union.c // 预期的文件：union.c

Allowed functions: write // 允许使用的函数：write

Write a program that takes two strings and displays, without doubles, 
the characters that appear in either one of the strings. 
// 编写一个程序，它接受两个字符串并显示这两个字符串中出现的字符，但不包含重复的字符。


The display will be in the order characters appear in the command line, 
and will be followed by a \n. 
// 显示的顺序将按照字符在命令行中出现的顺序，并以 \n 结尾。


If the number of arguments is not 2, the program displays \n. 
// 如果参数的数量不是 2，则程序将显示 \n。


*/

/*
1.命令行参数处理：
在C语言中，处理命令行参数通常涉及使用argc和argv这两个参数。
argc表示命令行参数的数量，argv是一个指向字符指针数组的指针，其中每个指针指向一个命令行参数字符串。
例如，对于命令./program arg1 arg2，argc的值将为3，argv将包含"./program", "arg1", "arg2"。

2.字符串处理：
字符串处理是编程中的一个重要方面，特别是在处理输入和输出时。
在C语言中，你将学习如何使用字符数组和字符串处理函数（如strlen、strcpy、strcat等）来对字符串进行操作。
这包括查找子字符串、拼接字符串、比较字符串等操作

*/



/*

#include <unistd.h>

这行代码是包含标准库头文件 <unistd.h>，该头文件包含了一些UNIX系统服务的函数原型。



int check_doubles2(char *str, char c)
定义了一个名为 check_doubles2 的函数，用于检查字符串 str 中是否存在字符 c，
并返回结果（存在返回0，不存在返回1）。

{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}

这部分是 check_doubles2 函数的具体实现，通过遍历字符串 str 中的每个字符，
判断是否与字符 c 相等，如果相等则返回0，表示存在重复字符，否则返回1。



int check_doubles1(char *str, char c, int pos)
定义了一个名为 check_doubles1 的函数，用于检查字符串 str 中前 pos 个字符是否存在字符 c，
并返回结果（存在返回0，不存在返回1）。

{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (0);
        i++; 
    }
    return (1);
}

这部分是 check_doubles1 函数的具体实现，通过遍历字符串 str 中前 pos 个字符，判断是否与字符 c 相等,
如果相等则返回0，表示存在重复字符，否则返回1。



void ft_union(char *str, char *str1)
定义了一个名为 ft_union 的函数，用于找到两个字符串 str 和 str1 中不重复的字符，并将它们输出到标准输出。


{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (check_doubles1(str, str[i], i) == 1)
            write(1, &str[i], 1);
        i++;
    }

这部分是 ft_union 函数的具体实现，首先遍历字符串 str 中的每个字符，对于不重复的字符，
使用 write 函数将其输出到标准输出。


    i = 0;
    while (str1[i] != '\0')
    {
        if (check_doubles2(str, str1[i]) == 1)
        {
            if (check_doubles1(str1, str1[i], i) == 1)
                write(1, &str1[i], 1);
        }
        i++;
    }
}

接着遍历字符串 str1 中的每个字符，对于不重复的字符，同样使用 write 函数将其输出到标准输出。





int main(int ac, char **av)
定义了程序的主函数 main，用于接收命令行参数。



{
    if (ac == 3)
        ft_union(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}

在 main 函数中，首先检查命令行参数的数量是否为3，如果是，则调用 ft_union 函数处理两个参数，
并将结果输出到标准输出；否则，输出一个换行符。最后返回0，表示程序执行成功。



*/






/*

#include <unistd.h>

int	check_db2(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
		return(0);
		i++;
	}
	return(1);
}


int	check_db1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}




void	ft_union(char *str1, char *str2)
{
	int	i;

	i = 0;
	while(str1[i] != '\0')
	{
		if(check_db1(str1, str1[i], i) == 1)
			write(1, &str1[i], 1);
		i++;
	}
	i = 0;
	while(str2[i] != '\0')
	{
		if(check_db2(str1, str2[i]) == 1)
		{
			if(check_db1(str2, str2[i], i) == 1)
				write(1, &str2[i], 1);
		}
		i++;
	}
}




int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return(0);
}


*/









/*

#include <unistd.h>

中文：包含头文件 <unistd.h>。

解释：这行代码导入了 <unistd.h> 头文件，该文件包含了一些与UNIX系统相关的函数原型。


int		check_doubles2(char *str, char c)

中文：定义函数 check_doubles2，接受一个字符指针和一个字符作为参数，返回一个整型值。

解释：这行代码定义了一个函数 check_doubles2，它接受一个字符指针 str 和一个字符 c 作为参数，并返回一个整型值。


{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

中文：在函数 check_doubles2 中，使用循环检查字符数组中是否存在重复的字符。

解释：这段代码定义了函数 check_doubles2，其中使用循环检查字符数组 str 中是否存在字符 c。
如果找到重复的字符，则返回 0，否则返回 1。


int		check_doubles1(char *str, char c, int pos)

中文：定义函数 check_doubles1，接受一个字符指针、一个字符和一个整数作为参数，返回一个整型值。

解释：这行代码定义了一个函数 check_doubles1，它接受一个字符指针 str、一个字符 c 和一个整数 pos 作为参数，并返回一个整型值。



{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++; 
	}
	return (1);
}

中文：在函数 check_doubles1 中，使用循环检查字符数组中前 pos 个字符是否存在重复的字符。

解释：这段代码定义了函数 check_doubles1，其中使用循环检查字符数组 str 中前 pos 个字符是否存在字符 c。
如果找到重复的字符，则返回 0，否则返回 1。



void	ft_union(char *str, char *str1)

中文：定义函数 ft_union，接受两个字符指针作为参数，无返回值。

解释：这行代码定义了一个函数 ft_union，它接受两个字符指针 str 和 str1 作为参数，并且没有返回值。



{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		//first string
		//check if character in position i has already appeared in first array
		//if not then print character then go to next position in array
		//if yes then go to next position in array
		if (check_doubles1(str, str[i], i) == 1)
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		//after first string in written
		//check if character in position i has appeared in first array
		//in no go to next if
		//if yes go to next position in array
		if (check_doubles2(str, str1[i]) == 1)
		{
			//check if character in position i has appeared in second array
			//if yes print and go to next position
			//in no go to next position
			if (check_doubles1(str1, str1[i], i) == 1)
				write(1, &str1[i], 1);
		}
		i++;
	}
}

中文：定义函数 ft_union，用于找出两个字符串中的唯一字符并输出。

解释：这段代码实现了函数 ft_union，它用于找出两个字符串 str 和 str1 中的唯一字符并输出。
首先遍历第一个字符串 str，对于每个字符，检查它是否已经在前面出现过，如果没有则输出该字符。
然后遍历第二个字符串 str1，对于每个字符，检查它是否在第一个字符串中出现过，
并且在自己的字符串中是否是唯一出现的字符，如果满足条件则输出该字符。



int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

中文：主函数，用于调用 ft_union 函数。

解释：这段代码是主函数，用于检查命令行参数是否为3个，如果是则调用 ft_union 函数，并在最后输出一个换行符。



*/










/*


#include <unistd.h>

int	check_db2(char	*str, char	c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
			if(str[i] == c)
				return(0);
			i++;
	}
	return(1);
}


int	check_db1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
			if(str[i] == c)
					return(0);
			i++;
	}
	return(1);
}


void	ft_union(char *str, char *str1)
{
		int	i;

		i = 0;
		while(str[i] != '\0')
		{
				if(check_db1(str, str[i], i) == 1)
						write(1, &str[i], 1);
				i++;
		}
		i = 0;
		while(str1[i] != '\0')
		{
				if(check_db2(str, str1[i]) == 1)
				{
						if(check_db1(str1, str1[i], i) == 1)
								write(1, &str1[i], 1);
				}
				i++;
		}
}


int	main(int ac, char **av)
{
	if(ac == 3)
			ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return(0);
}




*/












/*


#include <unistd.h>

int	check_db2(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
			if(str[i] == c)
					return(0);
			i++;
	}
	return(1);
}


int	check_db1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while( i < pos)
	{
			if(str[i] == c)
					return(0);
			i++;
	}
	return(1);
}



void	ft_union(char *str, char *str1)
{
		int	i;

		i = 0;
		while(str[i] != '\0')
		{
				if(check_db1(str,str[i], i) == 1)
						write(1, &str[i], 1);
				i++;
		}
		i = 0;
		while(str1[i] != '\0')
		{
				if(check_db2(str,str1[i]) == 1)
				{
						if(check_db1(str1, str1[i], i) == 1)
								write(1, &str1[i], 1);
				}
				i++;
		}
		
}



int	main(int ac, char **av)
{
	if(ac == 3)
		ft_union(av[1],av[2]);
	wrirte(1, "\n", 1);
	return(0);
		
}





*/









/*

#include <unistd.h>

int	check_db2(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
			if(str[i] == c)
					return(0);
			i++;
	}
	return(1);
}


int	check_db1(char *str, char c, int pos)
{
		int	i;

		i = 0;
		while( i < pos)
		{
				if(str[i] == c)
						return(0);
				i++;
		}
		return(1);
}


void	ft_union(char *str, char *str1)
{
		int	i;

		i = 0;
		while(str[i] != '\0')
		{
				if(check_db1(str, str[i], i) == 1)
						write(1, &str[i], 1);
				i++;
		}
		i = 0;
		while(str1[i] != '\0')
		{
				if(check_db2(str, str1[i]) == 1)
				{
						if(check_db1(str1,str1[i], i) == 1)
								write(1, &str1[i], 1);
				}
				i++;
		}
}



int	main(int ac, char **av)
{
		if(ac == 3)
				ft_union(av[1], av[2]);
		write(1, "\n", 1);
		return(0);
}



*/














/*

#include <unistd.h>

int	check_db2(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
			if(str[i] == c)
					return(0);
			i++;
	}
	return(1);
}


int	check_db1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
			if(str[i] == c)
					return(0);
			i++;
	}
	return(1);
}






void	ft_union(char *str, char *str1)
{
	int	i;

	i = 0;
	while(str[i] != '\0)
	{
		if(check_db1(str,str[i], i) == 1)
				write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while(str1[i] != '\0')
	{
		if(check_db2(str, str1[i]) == 1)
		{
			if(check_db1(str1,str1[i],i) == 1)
					write(1, str1[i], 1);
		}
		i++;
	}
}



int	main(int ac, char **av)
{
	if(ac == 3)
		ft_union(av[1],av[2]);
	write(1, "\n", 1);
	return(0);
}



*/











/*


int	check_db2(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
				return(0);
		i++;
	}
	return(1);
}


int	check_db2(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if(str[i] == c)
				return(0);
		i++;
	}
	return(1);
}



void	ft_union(char *str, char *str1)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
			if(check_db1(str, str[i], i) == 1)
					write(1, &str[i], 1);
			i++;
	}
	i = 0;
	while(str1[i] != '\0')
	{
			if(check_db2(str,str1[i]) == 1)
			{
					if(check_db1(str1, str1[i], 1)
							write(1, &str1[i], 1);
			}
			i++;
	}
}



int	main(int ac, char **av)
{
	if(ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return(0);
}



*/



/*



#include <unistd.h>

int	check_db2(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}


int	check_db1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}



void	ft_union(char *str, char *str1)
{
		int	i;

		i = 0;
		while(str[i] != '\0')
		{
			if(check_db1(str,str[i], i) == 1)
				write(1, &str[i], 1);
			i++;
		}
		i = 0;
		while(str1[i] != '\0')
		{
			if(check_db2(str, str1[i]) == 1)
			{
				if(check_db1(str1, str1[i], i) == 1)
					write(1, &str1[i], 1);
			}
			i++;
		}
}



int	main(int ac, char **av)
{
	if(ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return(0);
}





*/







#include <unistd.h>

int	check_db2(char *str,char c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return(1);
}



int	check_db1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}


void	ft_union(char *str, char *str1)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(check_db1(str, str[i], i) == 1)
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while(str1[i] != '\0')
	{
		if(check_db2(str, str1[i]) == 1)
		{
			if(check_db1(str1, str1[i], i) ==1)
				write(1, &str1[i], 1)
		}
	i++;
	}
}











































































































































/*



#include <unistd.h>
包含头文件 unistd.h，该头文件声明了 write 函数。



int check_doubles(char *str, char c)
定义了一个名为 check_doubles 的函数，接受一个指向字符的指针 str 和一个字符 c 作为参数，返回一个整数。

{
	while (*str)
进入 check_doubles 函数，使用循环遍历字符串 str 中的每个字符，直到遇到字符串的结尾标志 \0。

	{
		if (*str == c)
			return (0);

如果当前字符与字符 c 相等，则表示字符 c 在字符串 str 中出现过，返回0表示存在重复字符。

		str++;
	}

指针 str 向前移动，继续检查下一个字符。

	return (1);

如果循环结束仍未找到字符 c，则返回1表示没有重复字符。

}




void ft_union(char *str, char *str1)
定义了一个名为 ft_union 的函数，接受两个指向字符的指针 str 和 str1 作为参数，无返回值。

{
	while (*str)

进入 ft_union 函数，使用循环遍历第一个字符串 str 中的每个字符，直到遇到字符串的结尾标志 \0。

	{
		if (check_doubles(str, *str))
			write(1, str, 1);
调用 check_doubles 函数检查当前字符是否在第一个字符串中重复出现，如果没有重复，则将该字符写入标准输出。

		str++;
	}

指针 str 向前移动，继续检查下一个字符。

	while (*str1)
使用循环遍历第二个字符串 str1 中的每个字符，直到遇到字符串的结尾标志 \0。

	{
		if (check_doubles(str1, *str1) && check_doubles(str, *str1))
			write(1, str1, 1);
调用 check_doubles 函数检查当前字符是否在第二个字符串中重复出现，
并且同时也检查它是否在第一个字符串中重复出现，如果没有重复，则将该字符写入标准输出。

		str1++;
	}
指针 str1 向前移动，继续检查下一个字符。
}




int main(int argc, char **argv)
定义了 main 函数，接受命令行参数个数和参数列表作为参数，返回一个整数。

{
	if (argc == 3)
检查命令行参数个数是否为3，即程序名称和两个字符串参数。

		ft_union(argv[1], argv[2]);
如果参数个数为3，则调用 ft_union 函数，传入第二个和第三个命令行参数作为参数，进行处理。

	write(1, "\n", 1);

在任何情况下，输出一个换行符表示结束。

	return (0);
}

程$>序正常结束，返回0

*/







/*

#include <unistd.h>

int		check_doubles(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (0);
		str++;
	}
	return (1);
}

void	ft_union(char *str, char *str1)
{
	while (*str)
	{
		if (check_doubles(str, *str))
			write(1, str, 1);
		str++;
	}
	while (*str1)
	{
		if (check_doubles(str1, *str1) && check_doubles(str, *str1))
			write(1, str1, 1);
		str1++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}


*/










































































