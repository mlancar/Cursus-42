/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:36:38 by malancar          #+#    #+#             */
/*   Updated: 2022/11/23 14:09:31 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrwrd(char const *s, char c)
{
	int	i;
	int	nbrwrd;

	i = 0;
	nbrwrd = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		nbrwrd++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (nbrwrd);
}

int	ft_wrdlen(char const *s, char c, int *i)
{
	int	wrdlen;

	wrdlen = 0;
	while (s[*i] && s[*i] == c)
		(*i)++;
	while (s[*i + wrdlen] && s[*i + wrdlen] != c)
		wrdlen++;
	return (wrdlen);
}

char	**ft_tab(char const *s, char c, char **tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i] && k < ft_nbrwrd(s, c))
	{
		j = 0;
		tab[k] = malloc(sizeof(char) * (ft_wrdlen(s, c, &i) + 1));
		if (!tab)
			return (NULL);
		while (s[i] && s[i] != c)
		{
			tab[k][j] = s[i];
			i++;
			j++;
		}
		tab[k][j] = '\0';
		k++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb;

	if (!s)
		return (NULL);
	nb = ft_nbrwrd(s, c);
	tab = malloc(sizeof(char *) * (nb + 1));
	if (!tab)
		return (NULL);
	tab[nb] = 0;
	if (ft_tab(s, c, tab))
		return (tab);
	return (0);
}
/*int	main()
{
	char **tab;
	int i = 0;

	tab = ft_split(NULL, 32);
	while (tab[i])
	{
		printf("tab [%d] = %s\n", i, tab[i]);
		i++;
	}
}*/
