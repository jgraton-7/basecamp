/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:36:10 by jgraton-          #+#    #+#             */
/*   Updated: 2020/12/03 12:39:55 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	int cont;

	cont = 0;
	while (*str != '\0')
	{
		str++;
		cont++;
	}
	return (cont);
}
}