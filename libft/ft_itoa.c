/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:51:26 by cacesar-          #+#    #+#             */
/*   Updated: 2025/08/01 11:36:51 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	result(int flag, long int n, char*str, int size);

static void	result(int flag, long int n, char*str, int size)
{
	while (size > 0)
	{
		str[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	if (flag == 1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int			flag;
	char		*str;
	long int	num;
	int			leng;

	flag = 0;
	leng = 0;
	num = (long int)n;
	if (num < 0)
	{
		flag = 1;
		num *= -1;
	}
	leng += ft_int_len(num);
	str = ft_calloc((leng + 1 + flag), sizeof(char));
	if (!str)
		return ((void *)0);
	result(flag, num, str, leng + flag);
	return (str);
}

/*  int main(void)
{

    char *teste;
    teste = ft_itoa(-2147483648);
    printf("%s\n", teste);
	printf("%s\n", teste + 0);
	printf("%s\n", teste + 1);
	printf("%s\n", teste + 2);
	printf("%s\n", teste + 3);
    return (0);
} */ 