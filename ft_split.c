/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roumbare <roumbare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:40:32 by roumbare          #+#    #+#             */
/*   Updated: 2022/05/18 14:42:32 by roumbare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	nbwords;

	nbwords = ft_countwords(s, c);
	dest = (char **)malloc((nbwords + 1)* sizeof(char *));
	if (!dest)
		return (NULL);
	dest[nbwords] = NULL;

}

char	*ft_malloc_word(char *s)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (s[i])
	{
		len = 0;
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c)
			{
				len++;
				i++;
			}
			j = i;
			dest = malloc((len + 1)* sizeof(char));
			if (!dest)
				return (NULL);
			while (s[i] != c)
			{
				dest[0] = s[j-len];
				j++;
				dest++;
			}
		}
	}
	/*size_t	len;
	char	*word;

	len = ft_strlen(s);
	word =(char *)malloc((len + 1)* sizeof(char));
	if (!word)
		return (0);
	return (word);*/
}

size_t	ft_countwords(char const *s, int c)
{
	size_t	i;
	size_t	nbwords;

	i = 0;
	nbwords = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			nbwords++;

			printf("nbwords = %ld\n, i = %ld\n", nbwords, i);
		}
		if (s[i])
			i++;
	}
	return (nbwords);
}

int	ft_charsep(char const s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	main(void)
{
	printf("%ld\n", ft_countwords("", ' '));
}