/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazitov <tmazitov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:05:52 by tmazitov          #+#    #+#             */
/*   Updated: 2023/07/08 19:45:40 by tmazitov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

size_t	ft_unsigned_strlen(const unsigned char *src)
{
	size_t	counter;

	counter = 0;
	while (src[counter])
		counter++;
	return (counter);
}

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	char	*src_str;
	char	*dst_str;
	size_t	counter;

	src_str = (char *)src;
	dst_str = (char *)dst;
	counter = 0;
	if (dst_str > src_str)
		ft_memcpy(dst, src, num);
	else
	{
		while (counter < num)
		{
			dst_str[counter] = src_str[counter];
			counter++;
		}
	}
	return (dst);
}
