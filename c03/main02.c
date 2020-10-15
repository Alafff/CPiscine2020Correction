/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzuntini <dzuntini@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:09:42 by dzuntini          #+#    #+#             */
/*   Updated: 2020/10/12 09:42:30 by dzuntini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char 	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char 			s1[50] = "cheztati"; 
	char 			s2[50] = "t\'astout";
	char 			s3[50] = "cheztati"; 
	char 			s4[50] = "t\'astout";
	char 			*i1;
	char 			*i2;
	unsigned int 	size;



	size = 20;
	i1 = ft_strcat(s1, s2);
	i2 = strcat(s3, s4);
	printf("Resultat fonction : %s, Resultat systeme : %s\n", i1, i2);
	return (0);
}
