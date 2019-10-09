/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsheev <nsheev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:48:51 by swedde            #+#    #+#             */
/*   Updated: 2019/09/24 14:18:05 by nsheev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 9999

# include <stdlib.h>

# include <string.h>

# include <unistd.h>

# include <stdio.h>

# include <fcntl.h>

typedef struct		s_g_list
{
	char			*content;
	int				sfd;
	struct s_g_list	*next;
}					t_g_list;

int					get_next_line(const int fd, char **line);

#endif
