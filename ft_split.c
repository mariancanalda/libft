/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/02/22 23:05:47 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c);
static char	*get_word(char const *s, char c);
void		free_split(char **split);

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
		s++;
		else
		{
		count++;
			while (*s && *s != c)
			s++;
		}
	}
	return (count);
}

static char	*get_word(char const *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
	len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (split)
	{
		while (split[i])
		{	
			free(split[i]);
		i++;
		}	
		free(split);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;

	count = count_words(s, c);
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s == c)
	s++;
		else
		{
		result[count - (count_words(s, c))] = get_word(s, c);
			while (*s && *s != c)
		s++;
		}
	}
	result[count] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	**words;
// 	int		i;

// 	words = ft_split("Hola,este,es,un,ejemplo", ',');
// 	i = 0;
// 	if (!words)
// 	{
// 		printf("Error al separar la cadena.\n");
// 		return (1);
// 	}
// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		i++;
// 	}
// 	free_split(words);
// 	return (0);
// }
