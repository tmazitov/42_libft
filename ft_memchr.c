/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazitov <tmazitov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:22:16 by tmazitov          #+#    #+#             */
/*   Updated: 2023/07/07 15:28:18 by tmazitov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t	counter;
	char	*src_str;

	counter = 0;
	src_str = (char *)src;
	while (src_str[counter] && counter < n)
	{
		if (src_str[counter] == c)
			return (&src_str[counter]);
		counter++;
	}
	if (src_str[counter] == c)
		return (&src_str[counter]);
	return (0);
}
