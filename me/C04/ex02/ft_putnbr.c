/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:00:07 by jgraton-          #+#    #+#             */
/*   Updated: 2020/12/03 13:00:09 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int        check(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
    }
    return (nb);
}

void    ft_putnbr(int nb)
{
    int a;
    int b;
    int nb2;

    nb2 = check(nb);
    a = 1;
    b = nb2 / 10;
    if (b > 0)
        while (b > 0)
        {
            b = b / 10;
            a = a * 10;
            if (b == 0)
            {
                while (a > 0)
                {
                    ft_putchar((nb2 / a) + '0');
                    nb2 = nb2 % a;
                    a = a / 10;
                }
            }
        }
    else
        ft_putchar((nb2) + '0');
}