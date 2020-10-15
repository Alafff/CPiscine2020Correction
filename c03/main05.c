
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzuntini <dzuntini@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:09:42 by dzuntini          #+#    #+#             */
/*   Updated: 2020/10/12 15:24:33 by dzuntini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char 			s1[50] = "  cifiyh"; 
	char 			s2[50] = "t  'astout";
	char 			s3[50] = "  cifjyh"; 
	char 			s4[50] = "t  'astout";
	int 			i1;
	int 			i2;
	unsigned int 	size;



	size = 10;
	i1 = ft_strlcat(s1, s2, size);
	i2 = strlcat(s3, s4, size);
	printf("Resultat fonction :%i \t%s, Resultat systeme :%i\t %s\n", i1, s1, i2, s3);
	return (0);
}
