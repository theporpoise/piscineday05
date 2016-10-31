/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 08:55:48 by mgould            #+#    #+#             */
/*   Updated: 2016/10/31 09:41:55 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	//handle if it's negative
	int mod10;
	mod10 = nb % 10;
	if (nb > 9)
	{
		ft_putnbr((nb / 10));
	}

	//ft_putchar('A');
	//ft_putchar(mod10 + '0');
	ft_putchar((nb % 10) + '0');

	/*
	while (nb > 0)
	{
		ft_putchar((nb % 10) + '0');
		nb /= 10;
	}
	*/
}
