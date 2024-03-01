/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yisimayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:14:03 by yisimayi          #+#    #+#             */
/*   Updated: 2024/02/20 23:51:35 by yisimayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
malloc 是 C 语言中的一种内存分配函数，用于动态地分配内存空间。其名称来源于 "memory allocation"（内存分配）。

在 C 语言中，有两种类型的内存分配：静态内存分配和动态内存分配。
静态内存分配是在编译时确定的，例如通过声明数组或全局变量来分配内存。
而动态内存分配则是在程序运行时根据需要动态分配内存。

malloc 函数的原型为：

c

void *malloc(size_t size);

其中，size_t 是无符号整型类型，用于表示内存大小。
malloc 接受一个 size 参数，指定要分配的内存空间的大小（以字节为单位），并返回一个指向分配的内存空间起始地址的指针。

使用 malloc 的一般步骤如下：

    调用 malloc 函数，并传递要分配的内存大小作为参数。
    malloc 函数会尝试找到足够大的内存块来满足请求。如果成功，
它会分配一块连续的内存空间，并返回指向该内存空间的指针；如果失败，它会返回空指针（NULL）。

    使用返回的指针来访问分配的内存空间。
    使用完分配的内存后，应使用 free 函数将其释放，以便将其返回给系统，防止内存泄漏。

malloc 函数是动态内存分配的基础，
它提供了一种灵活的方式来管理程序运行时的内存需求。在使用时需要注意内存泄漏和悬挂指针等问题，
确保合理地分配和释放内存，以保证程序的健壮性和性能。

*/



/*
这个程序的任务是编写一个函数 ft_range，
该函数接受两个整数参数 start 和 end，然后使用 malloc() 动态分配一个整数数组，
并填充该数组以包含从 start 到 end（包括 start 和 end）的连续值，最后返回指向数组第一个值的指针。

示例:

    对于 (1, 3)，你将返回一个包含 1、2 和 3 的数组。
    对于 (-1, 2)，你将返回一个包含 -1、0、1 和 2 的数组。
    对于 (0, 0)，你将返回一个包含 0 的数组。
    对于 (0, -3)，你将返回一个包含 0、-1、-2 和 -3 的数组。

int *ft_range(int start, int end)  //定义了一个名为 ft_range 的函数，接受两个整数参数 start 和 end，返回一个整型指针。
{
    int size;
    int i;
    int *tab;
    int *d;

    size = ft_abs(end - start) + 1; // 计算数组大小，为 end - start 的绝对值加 1
    d = (tab = malloc(size * sizeof(int))); // 使用 malloc 分配内存给数组 tab，并将其地址赋给指针 d
    if (!d) // 检查内存分配是否成功
        return (0); // 如果分配失败，返回空指针
    i = 0; // 初始化循环计数器
    if (size == 1) // 如果数组大小为 1
        tab[0] = start; // 将 start 赋值给数组的第一个元素
    if (start < end) // 如果 start 小于 end
    {
        while (i < size) // 循环填充数组 tab，从 start 开始递增
        {
            tab[i] = start + i;
            i++;
        }
    }
    else if (start > end) // 如果 start 大于 end
    {
        while (i < size) // 循环填充数组 tab，从 start 开始递减
        {
            tab[i] = start - i;
            i++;
        }
    }
    return (tab); // 返回指向数组 tab 的指针
}
定义了一个名为 ft_range 的函数，接受两个整数参数 start 和 end，返回一个整型指针。
计算数组的大小 size，即 end - start 的绝对值加 1。
使用 malloc 分配内存给整型数组 tab，并将其地址赋给指针 d。
检查内存分配是否成功，如果分配失败，则返回空指针。
初始化循环计数器 i 为 0。
如果数组大小为 1，则将 start 赋值给数组的第一个元素。
如果 start 小于 end，则使用循环填充数组 tab，从 start 开始递增。
如果 start 大于 end，则使用循环填充数组 tab，从 start 开始递减。
返回指向数组 tab 的指针


int main(void)
{
    int *tab;
    int i = 0;
    int start = 0;
    int end = 0;
    int size = ft_abs(end - start) + 1;
    
    tab = ft_range(start, end);
    while (i < size)
    {
        printf("%i, ", tab[i]);
        i++;
    }
}

主函数，不接受任何参数，返回整数。
声明整型指针 tab 和整数变量 i，并将 start 和 end 初始化为 0。
计算数组大小 size。
调用 ft_range 函数，将返回的数组指针赋值给 tab。
使用循环打印数组 tab 中的元素。
打印格式为 "%i, "，即每个元素后面跟一个逗号和一个空格。
返回整数 0，表示程序正常结束。

*/




#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int	x)
{
	if(x < 0)
		return(-x);
	return(x);
}

int	*ft_range(int start, int end)
{
	int	size;
	int	i;
	int	*tab;
	int	*d;

	size = ft_abs(end - start) + 1;
	d = (tab = malloc(size *sizof(int)));
	if(!d)
		return(0);
	i = 0;
		if(size == 1)
		tab[0] = start;
	if(start < end)
	{
		while(i < size)
		{
			tab[i] = start + i;
			i++;
		}
	}
	else if(start > end)
	{
		while(i < size)
		{
			tab[i] = start - i;
			i++;
		}
	}
	return(tab);
}


int	main(void)
{
	int	*tab;
	int	i = 0;
	int	start = 0;
	int	end = 0;
	int	size = ft_ft_abs(end - start) + 1;

	tab = ft_range(start, end);
	while(i < size)
	{
		printf("%i, ",tab[i]);
		i++;
	}
}












































































































































































