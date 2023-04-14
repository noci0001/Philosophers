/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snocita <snocita@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:31:45 by snocita           #+#    #+#             */
/*   Updated: 2023/04/14 17:50:44 by snocita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/philosophers.h"

void	msg_err(char *str)
{
	printf("%s\n", str);
	exit(1);
}
