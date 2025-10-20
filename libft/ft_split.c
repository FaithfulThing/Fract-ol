/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacesar- <cacesar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:22:16 by cacesar-          #+#    #+#             */
/*   Updated: 2025/07/31 09:49:32 by cacesar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	void	ft_the_little_split(char**result, char*s2, int words);

char	**ft_split(char const *s, char c)
{
	int		count;
	int		words;
	char	**result;
	char	*s2;

	words = 0;
	count = -1;
	if (!s)
		return ((void *)0);
	s2 = (char *)ft_strdup((char *)s);
	while (s[++count])
	{
		if (s2[count] != c && (s2[count + 1] == c || s2[count + 1] == '\0'))
			words++;
		if (s2[count] == c)
			s2[count] = '\0';
	}
	result = ft_calloc(words + 1, sizeof(char *));
	ft_the_little_split(result, s2, words);
	free(s2);
	return (result);
}

static	void	ft_the_little_split(char**result, char*s2, int words)
{
	int	count1;

	count1 = 0;
	while (words > 0)
	{
		if (*s2 == '\0' && words != 0)
			*s2++ = '0';
		else
		{
			result[count1] = ft_strdup(s2);
			words--;
			if (!result[count1++])
			{
				while (count1 >= 0)
					free(result[--count1]);
				free(result);
			}
			while (*s2)
				s2++;
		}
	}
}
/* int main(void)
{

	char result1[] = {"  tripouille  42  "};
	char **teste;
	teste = ft_split(result1, ' ');
	while (*teste)
		printf("%s\n", *teste++);
	return (0);
}  */