/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzuntini <dzuntini@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:09:42 by dzuntini          #+#    #+#             */
/*   Updated: 2020/10/12 11:20:07 by dzuntini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char 			s1[50] = "4vPKl01Gt3Wi71OJd3Ee"; 
	char 			s2[50] = "45610";
	char 			s3[50] = "4vPKl01Gt3Wi71OJd3Ee"; 
	char 			s4[50] = "45610";
	char			*i1;
	char 			*i2;
	unsigned int 	size;


	
	size = NULL;
	i1 = ft_strstr(s1, s2);
	i2 = strstr(s3, s4);
	printf("Resultat fonction : %s, Resultat systeme : %s\n", i1, i2);
	return (0);
}
