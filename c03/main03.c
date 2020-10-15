/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzuntini <dzuntini@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:09:42 by dzuntini          #+#    #+#             */
/*   Updated: 2020/10/12 09:57:16 by dzuntini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char 			s1[50] = "cheztati"; 
	char 			s2[50] = "t\'astout";
	char 			s3[50] = "cheztati"; 
	char 			s4[50] = "t\'astout";
	char 			*i1;
	char 			*i2;
	unsigned int 	size;



	size = 4;
	i1 = ft_strncat(s1, s2, size);
	i2 = strncat(s3, s4, size );
	printf("Resultat fonction : %s, Resultat systeme : %s\n", i1, i2);
	return (0);
}
