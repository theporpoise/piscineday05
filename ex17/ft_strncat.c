/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 20:36:26 by mgould            #+#    #+#             */
/*   Updated: 2016/11/01 21:45:28 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && (j < nb))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\n';
	return (dest);
}
