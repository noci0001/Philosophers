/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snocita <snocita@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:35:40 by snocita           #+#    #+#             */
/*   Updated: 2023/04/14 18:28:44 by snocita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/philosophers.h"

int	parsing(char *str)
{
	int	i;
	int	letter;

	i = 0;
	letter = 0;
	while (str[i])
	{
		printf("%c\n", str[i]);
		if (letter > 3)
			return (0);
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
		letter++;
	}
	printf("\t%d\n", letter);
	if (letter != 3)
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	val;
	int	sign;

	val = 0;
	sign = 1;

	if (*str == '0')
	

	return (sign * val);
}

void	catalysis(char *str)
{
	if (INT_MIN < ft_atoi(str) > INT_MAX)
		msg_err("The inputs are outside of the range of acceptable ints");
}
