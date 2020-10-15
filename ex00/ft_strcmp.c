/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzuntini <dzuntini@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:09:42 by dzuntini          #+#    #+#             */
/*   Updated: 2020/10/09 16:39:05 by dzuntini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int total;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			total = s1[i] - s2[i];
			return total;
		}
		i++;
	}
	return(0);
}

int main()
{
	char *s1;
	char *s2;
	int i1;
	int i2;

	s1 = "Le compilo est mon dieu";
	s2 = "La norme est mon diable";

	i1 = ft_strcmp(s1, s2);
	i2 = strcmp(s1, s2);
	printf("Resultat fonction : %i\n , Resultat systeme : %i\n" , i1 ,i2);
	return(0);
}
