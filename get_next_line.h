/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjorinn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 15:34:02 by sjorinn           #+#    #+#             */
/*   Updated: 2019/01/07 16:10:44 by pchambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42
# define FD_MAX 4864

# include "libft/includes/libft.h"
# include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif
