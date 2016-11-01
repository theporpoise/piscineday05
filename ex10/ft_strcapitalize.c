/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 09:39:10 by mgould            #+#    #+#             */
/*   Updated: 2016/11/01 11:45:15 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += ('a' - 'A');
		}
		i++;
	}
	return (str);
}

void	first_alpha(char *str, int *pflag, int i)
{
	if (('a' <= str[i] && str[i] <= 'z') ||
		('0' <= str[i] && str[i] <= '9'))
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		*pflag = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;
	int *pflag;

	pflag = &flag;
	i = 0;
	flag = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		first_alpha(str, pflag, i);
		while (flag == 1)
		{
			i++;
			if ((str[i] < 'a' || str[i] > 'z') &&
				(str[i] < '0' || str[i] > '9'))
				flag = 0;
		}
		if (str[i] == '\0')
			return (str);
		i++;
	}
	return (str);
}
