/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazitov <tmazitov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:17:43 by tmazitov          #+#    #+#             */
/*   Updated: 2023/07/12 19:10:09 by tmazitov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	is_white_space(char ch)
{
	return (ft_strchr(" \t\n\r\v\f", ch) != NULL);
}

int	check_type(char ch)
{
	if (ch == '-')
		return (-1);
	return (1);
}

int	conv_to_numb(char *str)
{
	int	digit;
	int	number_length;
	int	number;
	int	counter;
	int	summator;

	number_length = 0;
	number = 0;
	counter = 0;
	digit = 0;
	summator = 1;
	while (str[number_length] >= '0' && str[number_length] <= '9')
		number_length++;
	while (counter < number_length)
	{
		digit = str[number_length - counter - 1] - '0';
		number += digit * summator;
		counter++;
		summator *= 10;
	}
	return (number);
}

int	ft_atoi(char const *str)
{
	int	sign;

	sign = 1;
	while (is_white_space(*str) && *str)
		str++;
	sign = check_type(*str);
	if (ft_strchr("+-", *str))
		str++;
	if (!ft_isdigit(*str))
		return (0);
	if (*str >= '0' && *str <= '9')
		return (conv_to_numb((char *)str) * sign);
	return (0);
}
