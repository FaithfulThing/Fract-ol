/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:01:56 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/26 14:58:08 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int			count;
	const char	*ret;
	int			flag;

	count = 0;
	flag = 0;
	while (s[count])
	{
		if (s[count] == (char)c)
		{
			ret = &s[count];
			flag++;
		}
		count++;
	}
	if (c == '\0')
		return ((char *)&s[count]);
	if (flag > 0)
		return ((char *)ret);
	return ((void *)0);
}
