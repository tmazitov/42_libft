/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazitov <tmazitov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:47:26 by tmazitov          #+#    #+#             */
/*   Updated: 2023/07/08 22:24:46 by tmazitov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

unsigned int	min(unsigned int num1, unsigned int num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*sub_str;
	size_t			counter;
	unsigned int	str_len;
	unsigned int	sub_len;

	str_len = ft_strlen(str);
	if (!str_len)
		return (NULL);
	if (start + len <= str_len)
		sub_len = len;
	else if (str_len - 1 < start)
		sub_len = 0;
	else
		sub_len = str_len - start;
	sub_str = malloc(sizeof(char) * (sub_len + 1));
	if (!sub_str)
		return (NULL);
	counter = 0;
	while (counter < sub_len && str[counter + start])
	{
		sub_str[counter] = str[counter + start];
		counter++;
	}
	sub_str[sub_len] = '\0';
	return (sub_str);
}
