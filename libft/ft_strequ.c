/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:08:02 by pchambon          #+#    #+#             */
/*   Updated: 2018/11/27 14:25:55 by pchambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	ft_strequcmp(const char *s1, const char *s2)
{
	unsigned int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

int			ft_strequ(const char *s1, const char *s2)
{
	if (ft_strequcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
