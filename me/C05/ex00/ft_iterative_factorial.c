/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:09:55 by jgraton-          #+#    #+#             */
/*   Updated: 2020/12/03 13:26:51 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int fac;
	int count;
	int nfac;

	nfac = 0;
	count = 0;
	fac = 1;
	while(count != nb)
	{
		nfac = nb - count;
		fac = fac * nfac; 
		count++;
	}
	return (fac);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(19));
	return (0);
}