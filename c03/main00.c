/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzuntini <dzuntini@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:09:42 by dzuntini          #+#    #+#             */
/*   Updated: 2020/10/12 08:41:38 by dzuntini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	char *s1;
	char *s2;
	int i1;
	int i2;

	s1 = "a";
	s2 = "ab";

	i1 = ft_strcmp(s1, s2);
	i2 = strcmp(s1, s2);
	printf("Resultat fonction : %i\n , Resultat systeme : %i\n" , i1 ,i2);
	return(0);
}
