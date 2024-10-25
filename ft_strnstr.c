/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:09:22 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/25 22:04:59 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(char *s1, char *s2, int n)
{
	int	i;
	int	j;
	int	lens2;

	i = 0;
	j = 0;
	lens2 = ft_strlen(s2);
	if (lens2 == 0)
		return (&s1[0]);
	while ((i < n) && (s1[i] != '\0'))
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while ((s1[i + j] == s2[j]) && ((i + j) < n))
			{
				if ((j + 1) == lens2)
					return (&s1[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[15];
	char str2[5];

	strcpy(str1, "Je vais bien");
	strcpy(str2, "var");
	printf("%p\n", str1);
	printf("%p\n", ft_strnstr(str1, str2, 15));	
}
*/