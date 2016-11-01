/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 19:19:49 by mgould            #+#    #+#             */
/*   Updated: 2016/10/31 22:41:12 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_tmp;
	char	*f_tmp;
	int		count;

	count = 0;
	str_tmp = str;
	f_tmp = to_find;
	if (*to_find == '\0')
		return (str);
	f_tmp = to_find;
	while (*str != '\0' && (count = 0) < 1)
	{
		while ((*str_tmp == *f_tmp || *f_tmp == '\0'))
		{
			if (*f_tmp == '\0')
				return (str_tmp - count);
			str_tmp++;
			f_tmp++;
			count++;
		}
		str++;
		str_tmp = str;
		f_tmp = to_find;
	}
	return (NULL);
}
