/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 10:14:13 by mgould            #+#    #+#             */
/*   Updated: 2016/10/31 17:56:02 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sign;
	int number;

	number = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign = sign * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((*str > 47) && (*str < 58))
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (number * sign);
}
