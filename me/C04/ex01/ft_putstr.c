/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:40:43 by jgraton-          #+#    #+#             */
/*   Updated: 2020/12/03 12:55:52 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int count;

	count = 0;
	while(str[count] != '\0')
	{
		char c = str[count];
		write(1, &c, 1);
		count++;
	}	
}
int main()
{
	ft_putstr("teste");
}