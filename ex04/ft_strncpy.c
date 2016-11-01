/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:46:24 by mgould            #+#    #+#             */
/*   Updated: 2016/10/31 19:18:19 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (dest[i] && i < n)
	{
		if (!src[i])
		{
			dest[i] = '\0';
		}
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
