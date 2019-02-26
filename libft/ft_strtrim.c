/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <malavent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:39:00 by malavent          #+#    #+#             */
/*   Updated: 2018/11/23 09:18:05 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	char			*s_trim;
	unsigned int	begin_ws;
	unsigned int	end_ws;
	int				j;

	if (s == NULL)
		return (NULL);
	else if (!is_whitespace(s[0]) && !is_whitespace(s[ft_strlen(s) - 1]))
		return (ft_strsub(s, 0, ft_strlen(s)));
	begin_ws = 0;
	end_ws = 0;
	while (is_whitespace(s[begin_ws]) && begin_ws < ft_strlen(s))
		begin_ws++;
	j = ft_strlen(s) - 1;
	while (is_whitespace(s[j]) && j-- >= 0)
		end_ws++;
	if (begin_ws == ft_strlen(s))
	{
		if (!(s_trim = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		*s_trim = '\0';
	}
	else
		s_trim = ft_strsub(s, begin_ws, ft_strlen(s) - (begin_ws + end_ws));
	return (s_trim);
}
