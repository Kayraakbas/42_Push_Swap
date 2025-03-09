/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:14:19 by omakbas           #+#    #+#             */
/*   Updated: 2024/10/24 20:37:35 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int numLen(int n)
{
	int len = 0;
	int num = n;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return len;
}

static char get_sign(int *num)
{
	if (*num < 0)
	{
		*num = -(*num);
		return '-';
	}
	return '\0';
}

static char *allocate_string(int len, char sign)
{
	char *str;
	int size = len + 1;
	
	if (sign)
		size++;
	str = (char *)malloc(size * sizeof(char));
	if (str)
		str[size - 1] = '\0';
	return str;
}

static void fill_string(char *str, int num, int len, int stopPos)
{
	int digit;

	while (len >= stopPos)
	{
		digit = num % 10;
		str[len] = 48 + digit;
		num = num / 10;
		len--;
	}
}

char *ft_itoa(int n)
{
	int num = n;
	int len;
	char sign = get_sign(&num);
	int stopPos = sign ? 1 : 0;

	if (n == 0)
	{
		char *str = (char *)malloc(2 * sizeof(char));
		if (!str)
			return NULL;
		str[0] = '0';
		str[1] = '\0';
		return str;
	}

	len = numLen(num);
	char *str = allocate_string(len, sign);
	if (!str)
		return NULL;
	if (sign)
		str[0] = sign;
	fill_string(str, num, len + stopPos - 1, stopPos);
	return str;
}
