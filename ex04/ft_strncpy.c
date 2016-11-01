/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:46:24 by mgould            #+#    #+#             */
/*   Updated: 2016/10/31 16:55:40 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (dest[i]  && i < n)
	{
		if (!src[i])
		{
			dest[i] = '\0';
		}
		else
			dest[i] = src[i];
		i++;
	}
	dest[i+1] = '\0';
	return (dest);
}
