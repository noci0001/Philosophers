/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snocita <snocita@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:24:46 by snocita           #+#    #+#             */
/*   Updated: 2023/04/14 18:21:21 by snocita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/philosophers.h"

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 5 || ac > 6)
		msg_err("Faulty amount of arguments.\n\tMinimum accepted amount: 5");
	while (i < ac)
	{
		if (parsing(av[i++]) == 0)
			msg_err("Incorrect input");
	}
	i = 1;
	while (i < ac)
		catalysis(av[i++]);
	return (0);
}
