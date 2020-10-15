/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzuntini <dzuntini@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:09:42 by dzuntini          #+#    #+#             */
/*   Updated: 2020/10/12 09:08:20 by dzuntini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int size);

int main()
{
	char *s1;
	char *s2;
	int i1;
	int i2;
	unsigned int size;

	s1 = "aejfjiejfie";
	s2 = "aejfjiejiej";
	size = 20;

	i1 = ft_strncmp(s1, s2, size);
	i2 = strncmp(s1, s2, size);
	printf("Resultat fonction : %i\n , Resultat systeme : %i\n" , i1 ,i2);
	return(0);
}
