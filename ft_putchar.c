/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:26:05 by ltranca-          #+#    #+#             */
/*   Updated: 2022/08/17 13:53:59 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

int	main(void)

{
	char	a;

	a = 98;
	ft_putchar(a);
}
