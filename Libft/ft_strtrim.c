/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:21:45 by iatopchu          #+#    #+#             */
/*   Updated: 2023/11/24 16:02:45 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	res = NULL;
	if (s1 != NULL)
	{
		i = 0;
		j = ft_strlen(s1) - 1;
		while (s1[i] != '\0' && ft_strchr(set, s1[i]))
			i++;
		while (s1[j] != '\0' && ft_strchr(set, s1[j]) && j > i)
			j--;
		res = ft_calloc(j - i + 2, sizeof(char));
		k = 0;
		while (k + i <= j)
		{
			res[k] = s1[k + i];
			k++;
		}
		res[k] = '\0';
	}
	return (res);
}
