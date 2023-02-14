/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/02/14 15:34:27 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*get_next_word(const char *s, char c, size_t *start)
{
	const char	*end;
	char		*word;

	while (s[*start] == c)
		(*start)++;
	end = s + *start;
	while (*end && *end != c)
		end++;
	word = ft_substr(s, *start, end - s - *start);
	*start = end - s;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	word_count;
	size_t	word_index;
	size_t	word_start;
	char	**words;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!words)
		return (NULL);
	i = 0;
	word_index = 0;
	word_start = 0;
	while (word_index < word_count)
	{
		words[word_index] = get_next_word(s, c, &word_start);
		if (!words[word_index])
		{
			while (i < word_index)
				free(words[i++]);
			free(words);
			return (NULL);
		}
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}

int main()
{
char *s;
char c;
char **res;
int i;

s = "Hello, World!";
c = ' ';
res = ft_split(s, c);
i = 0;
while (res[i])
{
printf("%s\n", res[i]);
i++;
}
return (0);
}