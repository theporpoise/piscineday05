/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 10:14:13 by mgould            #+#    #+#             */
/*   Updated: 2016/10/31 12:25:26 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sign;
	int number;
	int count;

	number = 0;
	sign = 1;
	count = 0;
	if (*str == '-')
	{
		sign = sign * -1;
		count++;
	}
	else if (*str == '+')
	{
		count++;
	}
	while ((str[count] > 47) && (str[count] < 58))
	{
		number *= 10;
		number += str[count] - '0';
		count++;
	}
	return (number * sign);
}
