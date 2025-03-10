/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:14:19 by omakbas           #+#    #+#             */
/*   Updated: 2024/10/25 20:29:57 by omakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*allocate_string(int len)
{
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (str)
		str[len] = '\0';
	return (str);
}

static void	fill_string(char *str, int num, int len)
{
	while (len-- > 0)
	{
		str[len] = '0' + (num % 10);
		num /= 10;
	}
}

static char	*handle_zero_case(void)
{
	char	*str;

	str = (char *)malloc(2 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_negative;
	char	*str;

	if (n == 0)
		return (handle_zero_case());
	is_negative = (n < 0);
	len = num_len(n);
	str = allocate_string(len);
	if (!str)
		return (NULL);
	if (is_negative)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[--len] = '8';
			n /= 10;
		}
		n = -n;
	}
	fill_string(str + is_negative, n, len - is_negative);
	return (str);
}
