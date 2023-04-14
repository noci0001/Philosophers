/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snocita <snocita@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:22:03 by snocita           #+#    #+#             */
/*   Updated: 2023/04/14 18:23:41 by snocita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/time.h>
# include <string.h>
# include <limits.h>

typedef struct s_table
{
	int		members;
	int		repas;
}	t_table;

typedef struct s_phil
{
	int				life;
	int				eat;
	int				sleep;
	struct s_phil	*next;
}	t_phil;

void	msg_err(char *str);
int		parsing(char *str);

#endif